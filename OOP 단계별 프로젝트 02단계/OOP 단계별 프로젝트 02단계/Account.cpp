#include <iostream>
#include "Account.h"

using namespace std;

void Bank::MakeAccount()
{
	int accid;
	char name[10];
	
	cout << endl<<"이름 입력 : ";
	cin >> name;

	cout << "사용할 계좌 입력 : ";
	cin >> accid;
	
	arr[NumOfAcc] = new Account(accid,name);
	NumOfAcc++;
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
		cout << "입금액 : " <<money<< endl << endl;
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
		cout << "출금액 : " << money<< endl << endl;
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
			break;
		}
	}
}