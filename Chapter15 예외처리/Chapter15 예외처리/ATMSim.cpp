//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class AccountException
//{
//public:
//	virtual void ShowExceptionReason() = 0;
//};
//	
//class DepositException:public AccountException
//{
//private:
//	int reqDep;
//public:
//	DepositException(int money) :reqDep(money)
//	{}
//	void ShowExceptionReason()
//	{
//		cout << "[���� �޽���: \" " << reqDep << " \" ���� �Ա� �Ұ�]" << endl;
//	}
//};
//
//class WithdrawException : public AccountException
//{
//private:
//	int balance;
//public:
//	WithdrawException(int money) :balance(money)
//	{}
//	void ShowExceptionReason()
//	{
//		cout << "[���� �޽��� : " << balance << ", �ܾ׺���]" << endl;
//	}
//};
//
//class Account
//{
//	char accNum[50];
//	int balance;
//public:
//	Account(const char* acc, int money) :balance(money)
//	{
//		strcpy_s(accNum,strlen(acc)+1,acc);
//	}
//	void Deposit(int money)
//	{
//		if (money < 0)
//		{
//			throw DepositException(money);
//		}
//		balance += money;
//	}
//
//	void Withdraw(int money) // throw (WithdrawException) ���ܰ� �̰͹ۿ����ٴ°� �˷��ָ鼭 �ٸ� ���ܰ� ���޵Ǹ� terminate �Լ� ȣ��� ���� ���α׷��� ���� �� 
//	{
//		if (money > balance)
//			throw WithdrawException(balance);
//		balance -= money;
//	}
//	void ShowMoney()
//	{
//		cout << "�ܰ� : " << balance << endl << endl;
//	}
//};
//
//int main()
//{
//	Account myAcc("56789-12345", 5000);
//
//	try
//	{
//		myAcc.Deposit(2000);
//		myAcc.Deposit(-300);
//		myAcc.Withdraw(3500);
//		myAcc.Withdraw(4500);
//		myAcc.ShowMoney();
//	}
//	catch (AccountException& expn)
//	{
//		expn.ShowExceptionReason();
//	}
//	myAcc.ShowMoney();
//
//	return 0;
//}
