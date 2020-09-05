#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int accid, const char name[]) :AccID(accid)
{
	Name = new char[strlen(name) + 1];
	strcpy_s(Name, strlen(name) + 1, name);
	Balance = 0;
}

NormalAccount::NormalAccount(int accid, const char name[],double r) :Account(accid, name),ratio(r) {}

HighCreditAccount::HighCreditAccount(int accid, const char name[], double r, int c) : Account(accid, name), ratio(r), cre(c) {}

int NormalAccount::GetDeposit(int m)
{
	Balance += (int)((Balance + m) * ratio);
	return m;
}

int HighCreditAccount::GetDeposit(int m)
{
	switch (cre)
	{
	case 1:
		return Balance += (int)((Balance + m) * ratio * 1.7);

	case 2:
		return Balance += (int)((Balance + m) * ratio * 1.4);

	case 3:
		return Balance += (int)((Balance + m) * ratio * 1.2);
	}
	return 0;
}
int Account::GetAccID()
{
	return AccID;
}

char* Account::GetName()
{
	return Name;
}

int Account::GetWithDraw(int m)
{
	Balance -= m;
	return m;
}

void NormalAccount::GetCheckMoney()
{
	cout << "이름 : " << GetName() << endl;
	cout << "계좌번호 : " << GetAccID() << endl;
	cout << "잔액 : " << Balance << endl << endl;
}

void HighCreditAccount::GetCheckMoney()
{
	cout << "이름 : " << GetName() << endl;
	cout << "계좌번호 : " << GetAccID() << endl;
	cout << "잔액 : " << Balance << endl << endl;
}

void Bank::MakeAccount()
{
	int n;
	cout << "[계좌종류선택]" << endl;
	cout << "1.보통예금계좌 2.신용신뢰계좌" << endl;
	cin >> n;

	switch (n)
	{
	case 1:
	{
		int accid;
		char name[10];
		double ratio;

		cout << endl << "이름 : ";
		cin >> name;

		cout << "계좌번호 : ";
		cin >> accid;

		cout << "이자율 : ";
		cin >> ratio;

		arr[NumOfAcc] = new NormalAccount(accid, name, ratio);
		NumOfAcc++;

		break;
	}
	case 2:
	{
		int accid;
		char name[10];
		double ratio;
		int c;
		cout << endl << "이름 : ";
		cin >> name;

		cout << "계좌번호 : ";
		cin >> accid;

		cout << "이자율 : ";
		cin >> ratio;

		cout << "신용등급(1 to A, 2 to B, 3 to C) : ";
		cin >> c;

		arr[NumOfAcc] = new HighCreditAccount(accid, name, ratio, c);
		NumOfAcc++;

		break;
	}
	}

}

void Bank::Deposit()
{
	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (!strcmp(name, arr[idx]->GetName()))
			break;

		idx++;
	}

	if (idx > NumOfAcc)
		cout << "/// 해당 고객 없음 ///" << endl;
	else
	{
		cout << "입금할 금액 입력 : ";
		cin >> money;
		cout << endl;
		arr[idx]->GetDeposit(money);
		cout << "입금액 : " << money << endl << endl;
	}

}

void Bank::Withdrawal()
{
	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (!strcmp(name, arr[idx]->GetName()))
			break;

		idx++;
	}

	if (idx > NumOfAcc)
		cout << "/// 해당 고객 없음 ///" << endl;
	else
	{
		cout << "출금할 금액 입력 : ";
		cin >> money;
		cout << endl;
		arr[idx]->GetWithDraw(money);
		cout << "출금액 : " << money << endl << endl;
	}
}

void Bank::AllCheckMoney()
{
	int idx = 0;
	cout << endl;
	cout << "전체 고객 잔액 조회" << endl << endl;

	while (idx < NumOfAcc)
	{
		arr[idx]->GetCheckMoney();
		idx++;
	}
}

void Bank::ShowMenu()
{
	cout << endl;
	cout << " -------- MENU --------" << endl << endl;
	cout << " 1. 계좌개설" << endl;
	cout << " 2. 입금" << endl;
	cout << " 3. 출금" << endl;
	cout << " 4. 계좌정보 전체 출력" << endl;
	cout << " 5. 프로그램 종료" << endl << endl;
}

void Bank::ProgramStart()
{
	int n;

	while (1)
	{
		ShowMenu();
		cout << " Menu Input Number : ";
		cin >> n;

		switch (n)
		{
		case 1:
			MakeAccount();
			break;
		case 2:
			Deposit();
			break;
		case 3:
			Withdrawal();
			break;
		case 4:
			AllCheckMoney();
			break;
		default:
			cout << endl << "------프로그램이 종료됩니다.------" << endl;
			return ;
		}
	}
}