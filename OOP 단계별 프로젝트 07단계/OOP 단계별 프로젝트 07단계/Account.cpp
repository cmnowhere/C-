#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int accid, const char name[]) :AccID(accid)
{
	Name = new char[strlen(name) + 1];
	strcpy_s(Name, strlen(name) + 1, name);
	Balance = 0;
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
