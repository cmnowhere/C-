//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int xpos, ypos;
//public:
//	Point(int x= 0, int y = 0) :xpos(x), ypos(y)
//	{}
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << ']' << ", " << '[' << ypos << ']' << endl;
//	}
//	Point operator+(const Point & ref)
//	{
//		Point pos(xpos + ref.xpos, ypos + ref.ypos);
//		return pos;
//	}
//
//	Point(const Point &ref) :xpos(ref.xpos), ypos(ref.ypos)
//	{
//		cout << "복사 완료" << endl;
//	}
//};
//
//int main()
//{
//	Point t1(1, 2);
//	t1.ShowPosition();
//	Point t2(3);
//	t2.ShowPosition();
//	Point t3 = t1 + t2; // Point t3(t1+t2); 로 묵시적 변환이 이루어짐 이는 연산자 오버로딩에 의해 pos로 반환되어 Point t3(pos) 로 변환되며, pos는 복사생성자에 의해 xpos 값과 ypos 값을 t3에 전달한다.
//	t3.ShowPosition();
//
//	return 0;
//}