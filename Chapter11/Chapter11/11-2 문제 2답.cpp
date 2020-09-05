//#include <iostream>
//
//using namespace std;
//
//class BoundCheckIntArray
//{
//	int* arr;
//	int arrlen;
//	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
//	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}
//
//public:
//	BoundCheckIntArray(int len) :arrlen(len)
//	{
//		arr = new int[len];
//	}
//
//	int& operator[] (int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Index out of bound" << endl;
//			exit(-1);
//		}
//		return arr[idx];
//	}
//
//	int operator[] (int idx) const
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Index out of bound" << endl;
//			exit(-1);
//		}
//		return arr[idx];
//	}
//
//	int GetArrlen() const
//	{
//		return arrlen;
//	}
//
//	~BoundCheckIntArray()
//	{
//		delete[]arr;
//	}
//};
//
//typedef BoundCheckIntArray* BoundCheckIntArrayPtr;
//
//class BoundCheck2DIntArray
//{
//private:
//	BoundCheckIntArray** arr;
//	int arrlen;
//	BoundCheck2DIntArray(const BoundCheck2DIntArray& arr) {}
//	BoundCheck2DIntArray& operator=(const BoundCheck2DIntArray& arr) {}
//
//public:
//	BoundCheck2DIntArray(int col, int row) :arrlen(col)
//	{																							//  BoundCheckIntArray obj1;
//		arr = new BoundCheckIntArrayPtr[col]; // BoundCheckIntArray ��ü�� �����͸� ��� �迭 ����  arr[0]=&obj1; �̿Ͱ��� �迭�� ���� ���� 
//		for (int i = 0; i < col; i++)
//			arr[i] = new BoundCheckIntArray(row); // arr[i]�� BoundCheckIntArray ��ü�� int * arr = new int[row]; �� ��. ��, arr[i]�� ��ü ����Ű�� �ּҸ� ����ְ� �� ��ü���� int[row]��ŭ�� �迭�� ������.
//	}
//
//	BoundCheckIntArray& operator[](int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Index out of bound" << endl;
//			exit(-1);
//		}
//		return *(arr[idx]); // arr[idx] �� ��ü�� ����Ű�� �ּ���. ���⼭ *arr[idx]�� �ϸ� ��ü�� ����Ŵ. �� BoundCheckIntArray ��ü�� ���������·� ��ȯ
//	}						// *(arr[0]).operator[](m) ���� ��ȯ�Ǹ� arr[0]�� ����Ű�� BoundCheckIntArray ��ü�� arr �迭�� ������ operator ���꿡 ���� idx ��°�� �ε��� ���� ������. 
//	~BoundCheck2DIntArray()
//	{
//		for (int i = 0; i < arrlen; i++)
//			delete arr[i];
//		delete[]arr;
//	}
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
