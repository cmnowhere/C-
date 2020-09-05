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
//		arr = new BoundCheckIntArrayPtr[col]; // BoundCheckIntArray 객체의 포인터를 담는 배열 생성  arr[0]=&obj1; 이와같이 배열에 저장 가능 
//		for (int i = 0; i < col; i++)
//			arr[i] = new BoundCheckIntArray(row); // arr[i]에 BoundCheckIntArray 객체의 int * arr = new int[row]; 가 됨. 즉, arr[i]는 객체 가리키는 주소를 담고있고 그 객체에는 int[row]만큼의 배열이 생성됨.
//	}
//
//	BoundCheckIntArray& operator[](int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Index out of bound" << endl;
//			exit(-1);
//		}
//		return *(arr[idx]); // arr[idx] 는 객체를 가리키는 주소임. 여기서 *arr[idx]를 하면 객체를 가리킴. 즉 BoundCheckIntArray 객체를 참조자형태로 반환
//	}						// *(arr[0]).operator[](m) 으로 변환되며 arr[0]이 가리키는 BoundCheckIntArray 객체의 arr 배열은 참조형 operator 연산에 의해 idx 번째의 인덱스 값을 가져옴. 
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
