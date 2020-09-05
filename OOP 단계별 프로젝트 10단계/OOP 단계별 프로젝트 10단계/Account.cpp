#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(const char accid[],int money, const char name[]) :Balance(money)
{
	AccID = new char[strlen(accid) + 1];
	strcpy_s(AccID, strlen(accid) + 1, name);

	Name = new char[strlen(name) + 1];
	strcpy_s(Name, strlen(name) + 1, name);
}

char* Account::GetAccID()
{
	return AccID;
}

char* Account::GetName()
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

