//#include <iostream>
//
//using namespace std;
//
//void main()
//{
//	int arr[10];
//
//	try
//	{
//		for (int i = 0; i < 13; i++)
//			arr[i] = i + 1;
//	}
//	catch (bad_exception b)
//	{
//		cout << b.what() << endl;
//	}
//	try
//	{
//		for (int i = 0; i < 13; i++)
//			cout << arr[i] << ' ';
//	}
//	catch (bad_exception b)
//	{
//		cout << b.what() << endl;
//	}
//}