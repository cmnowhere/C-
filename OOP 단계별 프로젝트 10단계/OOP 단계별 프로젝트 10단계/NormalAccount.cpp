#include <iostream>
#include "NormalAccount.h"

using namespace std;

NormalAccount::NormalAccount(int accid,int money, const char name[], double r) :Account(accid,money, name), ratio(r) {}

void NormalAccount::GetCheckInfo()
{
	cout << "ÀÌ¸§ : " << GetName() << endl;
	cout << "°èÁÂ¹øÈ£ : " << GetAccID() << endl;
	cout << "ÀÜ¾× : " << GetCheckMoney() << endl << endl;
}

void NormalAccount::GetDeposit(int m)
{	
	int b = GetCheckMoney();
	b += m+(int)(m * ratio/100);
	Account::GetDeposit(b);
}