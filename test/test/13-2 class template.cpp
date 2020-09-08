//#include <iostream>
//
//using namespace std;
//
//template<typename T>
//class SmartPtr
//{
//private:
//	T* posptr;
//public:
//	SmartPtr(T* ptr) :posptr(ptr)
//	{
//		cout << "SmartPtr 생성 완료" << endl;
//	}
//
//	T& operator*()const
//	{
//		return *posptr;
//	}
//
//	T* operator->()const
//	{
//		return posptr;
//	}
//	~SmartPtr()
//	{
//		delete posptr;
//	}
//};
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y) {}
//	void SetPos(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//};
//
//int main()
//{
//	SmartPtr<Point> sptr1(new Point(1, 2));
//	sptr1->SetPos(5, 5);
//	sptr1->ShowPosition();
//
//	return 0;
//}