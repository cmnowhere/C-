#include <iostream>

using namespace std;

class Base
{
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() :num2(0), num3(0) {}

};

class Derived :private Base
{
public:
	void ShowData()
	{
		//cout << num1 << endl;
		cout << num2 << endl;
		cout << num3 << endl;
	}
};

//int main()
//{
//	Derived test1;
//
//	test1.ShowData();
//
//	return 0;
//}
