//#include <iostream>
//
//using namespace std;
//
//
//class BoundCheck2DIntArray
//{
//private:
//	int row;
//	int** parr;
//public:
//	BoundCheck2DIntArray(int n, int m) :row(0)
//	{
//		parr = new int*[n];
//		for(int i=0;i<n;i++)
//			parr[i] = new int[m];
//	}
//
//	const BoundCheck2DIntArray& operator[](int n)
//	{
//		row = n;
//		return *this;
//	}
//
//	int& operator[](int n) const
//	{
//		return *(*(parr + row) + n); //parr[row][n];
//	}d
//};
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
//			cout << "arr2d[" << n << "][" << m << "]=" << arr2d[n][m] << endl;
//	}
//}