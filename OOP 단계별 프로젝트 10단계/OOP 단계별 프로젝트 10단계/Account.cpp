#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(String accid,int money, String name) :AccID(accid),Balance(money),Name(name){}

String Account::GetAccID()
{
	return AccID;
}

String Account::GetName()
{
	return Name;
}
int Account::GetMoney()
{
	return Balance;
}

void Account::GetDeposit(int m)
{
	Balance = m;
}

int Account::GetWithDraw(int m)
{
	Balance -= m;
	return m;
}

