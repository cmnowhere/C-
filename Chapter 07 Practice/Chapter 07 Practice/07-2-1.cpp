#include <iostream>

using namespace std;

class Rectangle
{
	int row;
	int cul;
public:
	Rectangle() :row(0), cul(0) {}

	Rectangle(int r, int c) :row(r), cul(c) {}

	void ShowAreaInfo()
	{
		cout << "면적 : " << row * cul << endl;
	}
};

class Square :public Rectangle
{
	int rc;
public:
	Square(int s) :rc(s) {}

	void ShowAreaInfo()
	{
		cout << "면적 : " << rc * rc << endl;
	}
};

//int main()
//{
//	Rectangle rec(4, 3);
//	rec.ShowAreaInfo();
//
//	Square sqr(7);
//	sqr.ShowAreaInfo();
//	return 0;
//}