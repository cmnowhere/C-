#include <iostream>
#include "HighCreditAccount.h"

using namespace std;

HighCreditAccount::HighCreditAccount(int accid, const char name[], double r, int c) : Account(accid, name), ratio(r), cre(c) {}

void HighCreditAccount::GetCheckMoney()
{
	cout << "�̸� : " << GetName() << endl;
	cout << "���¹�ȣ : " << GetAccID() << endl;
	cout << "�ܾ� : " << Balance << endl << endl;
}

int HighCreditAccount::GetDeposit(int DePositMoney)
{
	switch (cre)
	{
	case 1:
		return Balance += DePositMoney + (int)(DePositMoney * ratio / 100 * 1.7);

	case 2:
		return Balance += DePositMoney + (int)(DePositMoney * ratio / 100 * 1.4);

	case 3:
		return Balance += DePositMoney + (int)(DePositMoney * ratio / 100 * 1.2);
	}
	return 0;
}