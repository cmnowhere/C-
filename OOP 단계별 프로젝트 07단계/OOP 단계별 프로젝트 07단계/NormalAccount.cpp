#include <iostream>
#include "NormalAccount.h"

using namespace std;

NormalAccount::NormalAccount(int accid, const char name[], double r) :Account(accid, name), ratio(r) {}

void NormalAccount::GetCheckMoney()
{
	cout << "ÀÌ¸§ : " << GetName() << endl;
	cout << "°èÁÂ¹øÈ£ : " << GetAccID() << endl;
	cout << "ÀÜ¾× : " << Balance << endl << endl;
}

int NormalAccount::GetDeposit(int m)
{
	Balance += m+(int)(m * ratio/100);
	return Balance;
}