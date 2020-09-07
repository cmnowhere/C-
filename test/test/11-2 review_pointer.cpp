//#include <iostream>
//
//using namespace std;
//
//typedef int* INT;
//class BoundCheck2DIntArray
//{
//private:
//	int** arr;
//	int row, col, ridx;
//public:
//	BoundCheck2DIntArray(int r, int c) :row(r),col(c),ridx(0)
//	{
//		arr = new INT[r];
//		for (int i = 0; i < r; i++)
//			arr[i] = new int[c];
//	}
//
//	const BoundCheck2DIntArray& operator[](int idx)
//	{
//		
//		if (idx < 0 || idx >= row)
//		{
//			cout << "Row Out of Index" << endl;
//			exit(-1);
//		}
//
//		ridx = idx;
//
//		return *this;
//	}
//
//	int& operator[](int idx) const
//	{
//		if (idx < 0 || idx >= col)
//		{
//			cout << "Column Out of Index" << endl;
//			exit(-1);
//		}
//		return *(*(arr + ridx) + idx);
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
//			arr2d[n][m] = n + m; 
//	
//	for (int n = 0; n < 3; n++)
//	{
//		for (int m = 0; m < 4; m++)
//			cout << arr2d[n][m] << ' ';
//		cout << endl;
//	}
//
//	
//
//	return 0;
//}
