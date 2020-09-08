#include <iostream>
#include "Account.h"
#include "Account_Exception.h"
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
	if (m < 0)
		throw Deposit_Error(m);

	if (m > Balance)
		throw Withdraw_Error(m,GetMoney());
	
	return Balance-=m;
}

