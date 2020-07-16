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
	cout << "이름 입력 : ";
	cin >> name;

	cout << "사용할 계좌 입력 : ";
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
	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;
	while (idx <= pa->NumOfData)
	{
		if (!strcmp(name, pa->cus[idx].AccountName))
			break;

		idx++;
	}

	if (idx > pa->NumOfData)
		cout << "/// 해당 고객 없음 ///" << endl;
	else
	{
		cout << "입금할 금액 입력 : ";
		cin >> money;
		cout << endl;
		pa->cus[idx].Balance += money;
		cout << "현재 금액 : " << pa->cus[idx].Balance << endl << endl;
	}

}

void Withdrawal(Account* pa)
{
	int idx = 0, money;
	char name[10];
	cout << endl;
	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;
	while (idx <= pa->NumOfData)
	{
		if (!strcmp(name, pa->cus[idx].AccountName))
			break;

		idx++;
	}

	if (idx > pa->NumOfData)
		cout << "/// 해당 고객 없음 ///" << endl;
	else
	{
		cout << "출금할 금액 입력 : ";
		cin >> money;
		cout << endl;
		pa->cus[idx].Balance -= money;
		cout << "현재 금액 : " << pa->cus[idx].Balance << endl << endl;
	}
}

void AllCheckMoney(Account* pa)
{
	int idx = 0;
	cout << endl;
	cout << "전체 고객 잔액 조회" << endl << endl;

	while (idx < pa->NumOfData)
	{
		cout << "이름 : " << pa->cus[idx].AccountName << endl;
		cout << "계좌번호 : " << pa->cus[idx].AccountNum << endl;
		cout << "잔액 : " << pa->cus[idx].Balance << endl << endl;
		idx++;
	}
}

void ShowMenu()
{
	cout << endl;
	cout << " -------- MENU --------" << endl << endl;
	cout << " 1. 계좌개설" << endl;
	cout << " 2. 입금" << endl;
	cout << " 3. 출금" << endl;
	cout << " 4. 계좌정보 전체 출력" << endl;
	cout << " 5. 프로그램 종료" << endl << endl;
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
			cout << endl << "------프로그램이 종료됩니다.------" << endl;
			break;
		}
	}
}
