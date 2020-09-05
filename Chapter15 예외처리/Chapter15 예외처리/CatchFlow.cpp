//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void Show()
//	{
//		cout << "A exception!" << endl;
//	}
//};
//class B :public A
//{
//public:
//	 void Show()
//	{
//		cout << "B exception!" << endl;
//	}
//};
//
//class C :public B
//{
//public:
//	 void Show()
//	{
//		cout << "C exception!" << endl;
//	}
//};
//
//void ExceptionGenerator(int expn)
//{
//	if (expn == 1)
//		throw A();
//
//	else if (expn == 2)
//		throw B();
//	else
//		throw C();
//}
//
//int main()
//{
//	try
//	{
//		ExceptionGenerator(3);
//		printf("zz");
//	}
//	catch (A& expn)
//	{
//		expn.Show();
//	}
//
//	
//
//	return 0;
//}