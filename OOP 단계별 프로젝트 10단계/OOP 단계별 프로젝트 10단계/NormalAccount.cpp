#include <iostream>
#include "NormalAccount.h"

using namespace std;

NormalAccount::NormalAccount(String accid, int money, String name, double r) :Account(accid, money, name), ratio(r) {}

void NormalAccount::GetCheckInfo()
{
	cout << "   �̸� : " << GetName() << endl << endl;
	cout << "   ���¹�ȣ : " << GetAccID() << endl << endl;
	cout << "   �ܾ� : " << GetMoney() << endl;
}

void NormalAccount::GetDeposit(int m)
{
	int b = GetMoney();
	b += m + (int)(m * ratio / 100);
	Account::GetDeposit(b);
}