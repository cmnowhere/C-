#include <iostream>
#include "Account.h"
#include "Bank.h"
#include "HighCreditAccount.h"
#include "NormalAccount.h"

using namespace std;

void Bank::MakeAccount()
{
	int n;
	cout << "[������������]" << endl;
	cout << "1.���뿹�ݰ��� 2.�ſ�ŷڰ���" << endl << "���� : ";
	cin >> n;

	switch (n)
	{
	case 1:
	{
		int accid;
		int money;
		char name[10];
		double ratio;

		cout << endl << "�̸� : ";
		cin >> name;

		cout << "���¹�ȣ : ";
		cin >> accid;

		cout << "�Աݾ� : ";
		cin >> money;
		cout << "������ : ";
		cin >> ratio;

		arr[NumOfAcc] = new NormalAccount(accid, money,name, ratio);
		NumOfAcc++;

		break;
	}
	case 2:
	{
		int accid;
		int money;
		char name[10];
		double ratio;
		int c;
		cout << endl << "�̸� : ";
		cin >> name;

		cout << "���¹�ȣ : ";
		cin >> accid;

		cout << "�Աݾ� : ";
		cin >> money;
		
		cout << "������ : ";
		cin >> ratio;

		cout << "�ſ���(1 to A, 2 to B, 3 to C) : ";
		cin >> c;

		arr[NumOfAcc] = new HighCreditAccount(accid,money, name, ratio, c);
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
	cout << "�̸� �Է� : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (!strcmp(name, arr[idx]->GetName()))
			break;

		idx++;
	}

	if (idx > NumOfAcc)
		cout << "/// �ش� �� ���� ///" << endl;
	else
	{
		cout << "�Ա��� �ݾ� �Է� : ";
		cin >> money;
		cout << endl;
		arr[idx]->GetDeposit(money);
		cout << "�Աݾ� : " << money << endl << endl;
	}

}

void Bank::Withdrawal()
{
	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "�̸� �Է� : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (!strcmp(name, arr[idx]->GetName()))
			break;

		idx++;
	}

	if (idx > NumOfAcc)
		cout << "/// �ش� �� ���� ///" << endl;
	else
	{
		cout << "����� �ݾ� �Է� : ";
		cin >> money;
		cout << endl;
		arr[idx]->GetWithDraw(money);
		cout << "��ݾ� : " << money << endl << endl;
	}
}

void Bank::AllCheckMoney()
{
	int idx = 0;
	cout << endl;
	cout << "��ü �� �ܾ� ��ȸ" << endl << endl;

	while (idx < NumOfAcc)
	{
		arr[idx]->GetCheckInfo();
		idx++;
	}
}

void Bank::ShowMenu()
{
	cout << endl;
	cout << " -------- MENU --------" << endl << endl;
	cout << " 1. ���°���" << endl;
	cout << " 2. �Ա�" << endl;
	cout << " 3. ���" << endl;
	cout << " 4. �������� ��ü ���" << endl;
	cout << " 5. ���α׷� ����" << endl << endl;
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
			cout << endl << "------���α׷��� ����˴ϴ�.------" << endl;
			return;
		}
	}
}