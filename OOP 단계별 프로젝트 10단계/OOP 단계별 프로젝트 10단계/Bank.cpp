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
		cout << "       [������������]" << endl << endl;
		cout << "1.���뿹�ݰ��� 2.�ſ�ŷڰ���" << endl << endl << "���� : ";
		cin >> n;

		if (cin.fail() || n < 0 || n>9)
			throw n;

		system("cls");

		switch (n)
		{
		case 1:
			cout << endl << "�̸� : ";
			cin >> name;

			cout << endl << "���¹�ȣ : ";
			cin >> accid;

			cout << endl << "�Աݾ� : ";
			cin >> money;

			cout << endl << "������ : ";
			cin >> ratio;

			arr[NumOfAcc] = new NormalAccount(accid, money, name, ratio);
			NumOfAcc++;
			break;

		case 2:
			cout << endl << "�̸� : ";
			cin >> name;

			cout << endl << "���¹�ȣ : ";
			cin >> accid;

			cout << endl << "�Աݾ� : ";
			cin >> money;

			cout << endl << "������ : ";
			cin >> ratio;

			cout << endl << "�ſ���(1 to A, 2 to B, 3 to C) : ";
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
		cout << "Error !! �߸� �ԷµǾ����ϴ�." << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		Sleep(2000);
		system("cls");
	}
	system("cls");
	cout << "   �� ���� ���� �Ϸ� ��" << endl;
	Sleep(2000);
	system("cls");
}

void Bank::Deposit()
{
	system("cls");

	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "�̸� �Է� : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (arr[idx]->GetName() == name)
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
	system("cls");

	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "�̸� �Է� : ";
	cin >> name;
	cout << endl;
	while (idx <= NumOfAcc)
	{
		if (arr[idx]->GetName() == name)
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
	system("cls");

	int idx = 0;
	cout << endl;
	cout << "---��ü �� �ܾ� ��ȸ---" << endl << endl;

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