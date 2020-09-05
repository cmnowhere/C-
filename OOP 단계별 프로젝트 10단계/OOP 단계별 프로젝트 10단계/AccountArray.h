#include <iostream>
#include "Account.h"

using namespace std;

typedef Account* Account_PTR;

class AccountArray
{
private:
	Account_PTR* arr;
	int len;
public:
	AccountArray(int l = 100) :len(l)
	{
		arr = new Account_PTR[l];
	}

	Account_PTR& operator[](int idx)
	{
		if (idx < 0 || idx >= len)
		{
			cout << "Out of Array index" << endl;
			exit(-1);
		}

		return arr[idx];
	}
	~AccountArray()
	{
		delete[]arr;
	}
};

