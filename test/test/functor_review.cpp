//#include <iostream>
//#include <time.h>
//#include <stdlib.h>
//
//using namespace std;
//
//class sortfunctor
//{
//public:
//	virtual bool operator()(int n1, int n2) const = 0;
//};
//
//class descsort :public sortfunctor
//{
//public:
//	bool operator()(int n1, int n2) const
//	{
//		return n1 > n2 ? true : false;
//	}
//};
//
//class ascsort :public sortfunctor
//{
//public:
//	bool operator()(int n1, int n2) const
//	{
//		return n1 < n2 ? true : false;
//	}
//};
//
//void Sortfunc(int arr[], int len, const sortfunctor& functor)
//{
//	int temp;
//
//	for (int i = len-1; i >= 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (functor(arr[j], arr[j + 1]))
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//		cout << arr[i] << ' ';
//
//	cout << endl << endl;
//}
//
//int main()
//{
//	int arr[10];
//	int len = sizeof(arr) / sizeof(int);
//
//	srand((unsigned int)time(NULL));
//
//	for (int i = 0; i < 10; i++)
//		arr[i] = rand() % 100+1;
//
//	Sortfunc(arr, len, descsort());
//
//	for (int i = 0; i < 10; i++)
//		cout << arr[i] << ' ';
//
//	return 0;
//}