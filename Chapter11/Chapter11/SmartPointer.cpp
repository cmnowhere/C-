//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{
//		cout << "Point 객체 생성 : " << this << endl << endl;
//	}
//
//	Point(const Point& cpoy) :xpos(cpoy.xpos), ypos(cpoy.ypos)
//	{
//		cout << "Point 복사생성자 호출 : " << this << endl << endl;
//	}
//
//	void SetPos(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//	friend ostream& operator<<(ostream& obj1, Point obj2);
//
//
//	~Point()
//	{
//		cout << "Point 객체 소멸 : " << this << endl << endl;
//	}
//};
//
//ostream& operator<<(ostream& obj1, Point obj2)
//{
//	cout << "[" << obj2.xpos << "," << obj2.ypos << "]" << endl << endl;
//	return obj1;
//}
//
//class SmartPointer
//{
//private:
//	Point* ptr;
//
//public:
//	SmartPointer(Point* p) :ptr(p)
//	{
//		cout << "SmartPointer 객체 생성" << endl;
//	}
//
//	Point& operator*()
//	{
//		return *ptr;
//	}
//
//	Point* operator->()
//	{
//		return ptr;
//	}
//
//
//	~SmartPointer()
//	{
//		cout << "SmartPointer 객체 소멸" << endl;
//		delete ptr;
//	}
//};
//
//int main()
//{
//	SmartPointer sptr(new Point(10, 20));
//
//	cout << endl << "------------------------" << endl << endl;
//
//	cout << *sptr; // cout << *ptr -> cout.operator<<(ostream os,Point p) -> 이후 매개변수 p 에 의해 복사생성자 호출 후 데이터 출력 후 return 하면서 소멸
//
//	sptr->SetPos(5, 5);
//
//	cout << endl << "------------------------" << endl << endl;
//
//	cout << *sptr;
//
//	cout << endl << "------------------------" << endl << endl;
//
//	return 0;
//}