#ifndef __Account_h__
#define __Account_h__

#define LEN 100
using namespace std;

class Account
{
private:
	int AccID;
	char* Name;
	int Balance;

public:
	Account(int accid, const char name[]);

	int GetAccID();

	char* GetName();

	virtual int GetDeposit(int m) = 0;

	int GetWithDraw(int m);

	virtual void GetCheckMoney() = 0;

	~Account()
	{
		delete[] Name;
	}
};


#endif