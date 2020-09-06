#include <iostream>
#include "HighCreditAccount.h"

using namespace std;

HighCreditAccount::HighCreditAccount(String accid,int money, String name, double r, int c) : Account(accid, money,name), ratio(r), cre(c) {}

void HighCreditAccount::GetCheckInfo()
{
	cout << "�̸� : " << GetName() << endl;
	cout << "���¹�ȣ : " << GetAccID() << endl;
	cout << "�ܾ� : " << GetMoney() << endl << endl;
}

void HighCreditAccount::GetDeposit(int DePositMoney)
{
	int b=GetMoney();
	switch (cre)
	{
	case 1:
		b += DePositMoney + (int)(DePositMoney * ratio / 100 * 1.7);
		Account::GetDeposit(b);
		break;
	case 2:
		 b += DePositMoney + (int)(DePositMoney * ratio / 100 * 1.4);
		Account::GetDeposit(b);
		break;

	case 3:
		 b += DePositMoney + (int)(DePositMoney * ratio / 100 * 1.2);
		 Account::GetDeposit(b);
	}
}