//#include <iostream>
//using namespace std;
//
//void test2();
//void test3();
//
//void test1()
//{
//
//	test2();
//	cout << "test1()" << endl;
//}
//
//void test2()
//{
//	test3();
//	cout << "test2()" << endl;
//}
//
//void test3()
//{
//	char arr;
//	cin >> arr;
//	if (arr == 'c')
//		throw 0;
//	throw arr;
//}
//
//int main()
//{
//	while (1)
//	{
//		try
//		{
//			test1();
//		}
//		
//		catch (char arr)
//		{
//			cout << arr << endl;
//		}
//
//		catch (int )
//		{
//			cout << "c 로시작하면 안됨" << endl;
//		}
//
//	}
//	return 0;
//}