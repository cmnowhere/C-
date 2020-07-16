#include <iostream>
using namespace std;

class SelfRef
{
	int num;

public:
	SelfRef(int n) : num(n)
	{
		cout << "°´Ã¤»ý¼º"<< endl;
	}

	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

//int main()
//{
//	SelfRef test(5);
//	SelfRef& ref = test.Adder(2);
//	test.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//	return 0;
//}