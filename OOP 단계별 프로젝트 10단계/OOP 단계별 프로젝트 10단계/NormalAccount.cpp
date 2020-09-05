#include <iostream>
#include "NormalAccount.h"

using namespace std;

NormalAccount::NormalAccount(int accid,int money, const char name[], double r) :Account(accid,money, name), ratio(r) {}

void NormalAccount::GetCheckInfo()
{
	cout << "�̸� : " << GetName() << endl;
	cout << "���¹�ȣ : " << GetAccID() << endl;
	cout << "�ܾ� : " << GetCheckMoney() << endl << endl;
}

void NormalAccount::GetDeposit(int m)
{	
	int b = GetCheckMoney();
	b += m+(int)(m * ratio/100);
	Account::GetDeposit(b);
}