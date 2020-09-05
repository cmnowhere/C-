#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int accid,int money, const char name[]) :AccID(accid),Balance(money)
{
	Name = new char[strlen(name) + 1];
	strcpy_s(Name, strlen(name) + 1, name);
}

int Account::GetAccID()
{
	return AccID;
}

char* Account::GetName()
{
	return Name;
}
int Account::GetCheckMoney()
{
	return Balance;
}

int Account::GetWithDraw(int m)
{
	Balance -= m;
	return m;
}

