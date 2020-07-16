#include <iostream>
#include "Account.h"

using namespace std;


void AInit(Account* pa)
{
	pa->NumOfData = 0;

	for (int i = 0; i < LEN; i++)
		pa->cus[i].Balance = 0;
}

void MakeAccount(Account* pa)
{
	int acnum;
	char name[10];
	cout << endl;
	cout << "�̸� �Է� : ";
	cin >> name;

	cout << "����� ���� �Է� : ";
	cin >> acnum;



	pa->cus[pa->NumOfData].AccountNum = acnum;

	strcpy_s(pa->cus[pa->NumOfData].AccountName, sizeof(pa->cus[pa->NumOfData].AccountName), name);

	pa->NumOfData++;
}

void Deposit(Account* pa)
{
	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "�̸� �Է� : ";
	cin >> name;
	cout << endl;
	while (idx <= pa->NumOfData)
	{
		if (!strcmp(name, pa->cus[idx].AccountName))
			break;

		idx++;
	}

	if (idx > pa->NumOfData)
		cout << "/// �ش� �� ���� ///" << endl;
	else
	{
		cout << "�Ա��� �ݾ� �Է� : ";
		cin >> money;
		cout << endl;
		pa->cus[idx].Balance += money;
		cout << "���� �ݾ� : " << pa->cus[idx].Balance << endl << endl;
	}

}

void Withdrawal(Account* pa)
{
	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "�̸� �Է� : ";
	cin >> name;
	cout << endl;
	while (idx <= pa->NumOfData)
	{
		if (!strcmp(name, pa->cus[idx].AccountName))
			break;

		idx++;
	}

	if (idx > pa->NumOfData)
		cout << "/// �ش� �� ���� ///" << endl;
	else
	{
		cout << "����� �ݾ� �Է� : ";
		cin >> money;
		cout << endl;
		pa->cus[idx].Balance -= money;
		cout << "���� �ݾ� : " << pa->cus[idx].Balance << endl << endl;
	}
}

void AllCheckMoney(Account* pa)
{
	int idx = 0;
	cout << endl;
	cout << "��ü �� �ܾ� ��ȸ" << endl << endl;

	while (idx < pa->NumOfData)
	{
		cout << "�̸� : " << pa->cus[idx].AccountName << endl;
		cout << "���¹�ȣ : " << pa->cus[idx].AccountNum << endl;
		cout << "�ܾ� : " << pa->cus[idx].Balance << endl << endl;
		idx++;
	}
}

void ShowMenu()
{
	cout << endl;
	cout << " -------- MENU --------" << endl << endl;
	cout << " 1. ���°���" << endl;
	cout << " 2. �Ա�" << endl;
	cout << " 3. ���" << endl;
	cout << " 4. �������� ��ü ���" << endl;
	cout << " 5. ���α׷� ����" << endl << endl;
}

void AccountStart(Account* pa)
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
			MakeAccount(pa);
			break;
		case 2:
			Deposit(pa);
			break;
		case 3:
			Withdrawal(pa);
			break;
		case 4:
			AllCheckMoney(pa);
			break;
		default:
			cout << endl << "------���α׷��� ����˴ϴ�.------" << endl;
			break;
		}
	}
}
