#include <iostream>
#include "Account.h"

using namespace std;

typedef Account* Account_PTR;

template<typename T>
class AccountArray
{
private:
	T* arr;
	int len;
public:
	AccountArray(int l = 100) :len(l)
	{
		arr = new T[l];
	}

	T& operator[](int idx)
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

