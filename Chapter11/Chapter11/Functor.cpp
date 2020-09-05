//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{
//		cout << "按眉 积己 : " << this << endl << endl;
//	}
//	
//	Point(const Point& cpoy) :xpos(cpoy.xpos), ypos(cpoy.ypos)
//	{
//		cout << "汗荤积己磊 龋免 : " << this << endl << endl;
//	}
//	
//	void SetPos(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//	Point operator+(const Point& pos1) const
//	{
//		return Point(xpos + pos1.xpos, ypos + pos1.ypos);
//	}
//
//	friend ostream& operator<<(ostream& obj1, Point obj2);
//	
//	~Point()
//	{
//		cout << "按眉 家戈 : " << this << endl << endl;
//	}
//};
//	
//ostream& operator<<(ostream& obj1, Point obj2)
//{
//	cout << "[" << obj2.xpos << "," << obj2.ypos << "]" << endl << endl;
//	return obj1;
//}
//
//class Adder
//{
//public:
//	int operator()(const int& n1, const int& n2)
//	{
//		return n1 + n2;
//	}
//
//	Point operator()(const Point& pos1, const Point& pos2)
//	{
//		return pos1 + pos2;
//	}
//};
//
//int main()
//{
//	Adder adder;
//
//	cout << adder(1, 2) << endl;
//
//	cout << adder(Point(1, 2), Point(2, 3)) << endl;
//
//	return 0;
//}
