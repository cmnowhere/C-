//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
//	return os;
//}
//
//typedef Point* POINT;
//
//class PointArr // Point 객체를 저장하는 배열 기반의 클래스
//{
//	Point* arr;
//	int len;
//
//public:
//	PointArr(int n) :len(n)
//	{
//		arr = new Point[len];
//	}
//
//	Point& operator[](int l)
//	{
//		if (l < 0 || l >= len)
//		{
//			cout << "Out of Bound" << endl;
//		}
//
//		return arr[l];
//	}
//};
//
//class PointaddrArr // Point 객체의 주소 값을 저장하는 배열 기반의 클래스
//{
//	Point** arr;
//	int len;
//
//public:
//	PointaddrArr(int n) :len(n)
//	{
//		arr = new Point*[len];
//	}
//
//	POINT& operator[](int l)
//	{
//		if (l < 0 || l >= len)
//		{
//			cout << "Out of Bound" << endl;
//		}
//
//		return arr[l];
//	}
//	~PointaddrArr()
//	{
//		delete[]arr;
//	}
//};
//
//int main()
//{
//	
//	PointArr arr(10);
//	PointaddrArr Parr(3);
//	Parr[0] = new Point(1, 1);
//	Point* temp = Parr[0];
//	Parr[1] = new Point(2, 2);
//	Parr[2] = new Point(3, 3);
//
//	for(int i=0;i<3;i++)
//	cout << Parr[i] << endl;
//	for (int i = 1; i < 3; i++)
//		delete Parr[i];
//	cout << *temp << endl;
//	return 0;
//}