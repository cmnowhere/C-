#include <iostream>
#include <Windows.h>
#include "Account.h"
#include "Bank.h"
#include "HighCreditAccount.h"
#include "NormalAccount.h"

using namespace std;

void Bank::MakeAccount()
{
	system("cls");
	String accid;
	int money, n, c;
	char name[10];
	double ratio;
	try
	{
		cout << "       [계좌종류선택]" << endl << endl;
		cout << "1.보통예금계좌 2.신용신뢰계좌" << endl << endl << "선택 : ";
		cin >> n;

		if (cin.fail() || n < 0 || n>9)
			throw n;

		system("cls");

		switch (n)
		{
		case 1:
			cout << endl << "이름 : ";
			cin >> name;

			cout << endl << "계좌번호 : ";
			cin >> accid;

			cout << endl << "입금액 : ";
			cin >> money;

			cout << endl << "이자율 : ";
			cin >> ratio;

			arr[NumOfAcc] = new NormalAccount(accid, money, name, ratio);
			NumOfAcc++;
			break;

		case 2:
			cout << endl << "이름 : ";
			cin >> name;

			cout << endl << "계좌번호 : ";
			cin >> accid;

			cout << endl << "입금액 : ";
			cin >> money;

			cout << endl << "이자율 : ";
			cin >> ratio;

			cout << endl << "신용등급(1 to A, 2 to B, 3 to C) : ";
			cin >> c;

			arr[NumOfAcc] = new HighCreditAccount(accid, money, name, ratio, c);
			NumOfAcc++;
			break;

		default:
			break;
		}
	}
	catch (int)
	{
		cout << "Error !! 잘못 입력되었습니다." << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		Sleep(2000);
		system("cls");
	}
	system("cls");
	cout << "   ★ 계정 생성 완료 ★" << endl;
	Sleep(2000);
	system("cls");
}

void Bank::Deposit()
{
	system("cls");

	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (arr[idx]->GetName() == name)
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
	system("cls");

	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (arr[idx]->GetName() == name)
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
	system("cls");

	int idx = 0;
	cout << endl;
	cout << "---전체 고객 잔액 조회---" << endl << endl;

	while (idx < NumOfAcc)
	{
		arr[idx]->GetCheckInfo();
		idx++;
	}
	cout << endl<<"-------------------------" << endl<<endl<<endl;

	system("pause");
	system("cls");
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
			return;
		}
	}
}