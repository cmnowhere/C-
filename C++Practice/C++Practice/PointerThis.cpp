#include <iostream>
#include <cstring>
using namespace std;

class Simple
{
	int num;
public:
	Simple(int n) :num(n)
	{
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num;
	}

	Simple* GetThisPointer()
	{
		return this;
	}
};

//int main()
//{
//	Simple sim1(100);
//	Simple* ptr1 = sim1.GetThisPointer();
//	cout << "num = ";
//	ptr1->ShowSimpleData();
//	cout << ", ptr1 = " << ptr1 << endl;
//	return 0;
//}