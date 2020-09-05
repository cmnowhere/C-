//#include <iostream>
//
//using namespace std;
//
//
//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{
//		cout << "객체 생성 : " << this << endl << endl;
//	}
//
//	Point(const Point& cpoy) :xpos(cpoy.xpos), ypos(cpoy.ypos)
//	{
//		cout << "복사생성자 호출 : " << this << endl << endl;
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
//		cout << "객체 소멸 : " << this << endl << endl;
//	}
//};
//
//ostream& operator<<(ostream& obj1, Point obj2)
//{
//	cout << "[" << obj2.xpos << "," << obj2.ypos << "]" << endl << endl;
//	return obj1;
//}
//
//Point test(Point p1) // 매개변수 p1 임시객체 생성 006FFD1C
//{
//	p1.SetPos(3, 3);
//	return p1;  // 반환 하면서 임시객체 생성 006FFE14
//}
//
//int main()
//{
//	Point p1(3, 1); // 객체 생성 006FFE24
//
//	cout << "----------------" << endl << endl;
//
//	cout << "xpos, ypos = " << p1 << endl;
//
//	cout << "----------------" << endl << endl;
//	Point p2 = test(p1); // 반환 완료 후 매개변수 p1 임시객체 소멸 006FFD1C
//
//	cout << "----------------" << endl << endl;
//
//	cout << "xpos, ypos = " << p1 << endl; // 반환된 임시객체를 p2에 복사함 006FFE14
//
//	printf("\n");
//
//	return 0;  // 프로그램 종료하면서 006FFE14, 006FFE24 소멸
//}