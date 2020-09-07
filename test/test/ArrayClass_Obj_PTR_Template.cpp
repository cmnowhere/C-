//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
//
//	int getxpos() const
//	{
//		return xpos;
//	}
//
//	int getypos() const
//	{
//		return ypos;
//	}
//
//	friend ostream& operator<<(ostream& cout, const Point& ref);
//};
//
//ostream& operator<<(ostream& cout, const Point& ref)
//{
//	cout << "xpos = " << ref.getxpos() << endl;
//	cout << "ypos = " << ref.getxpos();
//
//	return cout;
//}
//
//typedef Point* Point_PTR;
//
//template <typename T>
//class ArrayClass
//{
//private:
//	T* arr;
//	int arrlen;
//public:
//	ArrayClass(int n = 50) :arrlen(n)
//	{
//		arr = new T[n];
//	}
//
//	T& operator[](int len)
//	{
//		return arr[len];
//	}
//
//	T operator[](int len) const
//	{
//		if (len < 0 || len >= arrlen)
//		{
//			cout << "Out of Index" << endl;
//			exit(-1);
//		}
//		printf("À×?");
//		return arr[len];
//	}
//
//
//
//	~ArrayClass()
//	{
//		delete[]arr;
//	}
//};
//
//int main()
//{
//	ArrayClass<Point_PTR> arr(10);
//
//	arr[0] = new Point(10, 10);
//
//	cout << *arr[0];
//
//	return 0;
//}
