//#include <iostream>
//
//using namespace std;
//
//class BoundCheckIntArray
//{
//private:
//	int* arr;
//	int arrlen;
//public:
//	BoundCheckIntArray(int n = 50) :arrlen(n)
//	{
//		arr = new int[n];
//	}
//
//	int& operator[](int len)
//	{
//		return arr[len];
//	}
//
//	int operator[](int len) const
//	{
//		if (len < 0 || len >= arrlen)
//		{
//			cout << "Out of Index" << endl;
//			exit(-1);
//		}
//		return arr[len];
//	}
//
//	~BoundCheckIntArray()
//	{
//		delete[]arr;
//	}
//};
//
//typedef BoundCheckIntArray* BoundCheckIntArray_PTR;
//
//class BoundCheck2DIntArray
//{
//private:
//	BoundCheckIntArray_PTR* arr;
//	int arrlen;
//public:
//	BoundCheck2DIntArray(int r, int c) :arrlen(r)
//	{
//		arr = new BoundCheckIntArray_PTR[r];
//		for(int i=0;i<r;i++)
//			arr[i] = new BoundCheckIntArray[c];
//	}
//
//	BoundCheckIntArray& operator[](int idx) 
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Out of Index" << endl;
//			exit(-1);
//		}
//
//		return *arr[idx];
//	}
//
//	~BoundCheck2DIntArray()
//	{
//		delete[]arr;
//	}
//};
//
//
//int main()
//{
//	BoundCheck2DIntArray arr2d(3, 4);
//
//	for (int n = 0; n < 3; n++)
//		for (int m = 0; m < 4; m++)
//			arr2d[n][m] = n + m; // (arr2d.operator[](n)).operator[](m) -> (BoundCheckIntArray °´Ã¼).operator[](m)
//
//	for (int n = 0; n < 3; n++)
//	{
//		for (int m = 0; m < 4; m++)
//			cout << arr2d[n][m] << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}
