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
	cout << "�̸� : " << GetName() << endl;
	cout << "���¹�ȣ : " << GetAccID() << endl;
	cout << "�ܾ� : " << Balance << endl << endl;
}

void HighCreditAccount::GetCheckMoney()
{
	cout << "�̸� : " << GetName() << endl;
	cout << "���¹�ȣ : " << GetAccID() << endl;
	cout << "�ܾ� : " << Balance << endl << endl;
}

void Bank::MakeAccount()
{
	int n;
	cout << "[������������]" << endl;
	cout << "1.���뿹�ݰ��� 2.�ſ�ŷڰ���" << endl;
	cin >> n;

	switch (n)
	{
	case 1:
	{
		int accid;
		char name[10];
		double ratio;

		cout << endl << "�̸� : ";
		cin >> name;

		cout << "���¹�ȣ : ";
		cin >> accid;

		cout << "������ : ";
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
		cout << endl << "�̸� : ";
		cin >> name;

		cout << "���¹�ȣ : ";
		cin >> accid;

		cout << "������ : ";
		cin >> ratio;

		cout << "�ſ���(1 to A, 2 to B, 3 to C) : ";
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
		arr[idx]->GetCheckMoney();
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
			return ;
		}
	}
}