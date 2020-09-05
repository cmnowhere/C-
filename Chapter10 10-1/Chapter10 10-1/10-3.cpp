#include <iostream>

using namespace std;

class Point
{
	int n1, n2;
public:
	Point() :n1(0), n2(0) {}

	Point(int num1, int num2) :n1(num1), n2(num2) {}

	void ShowData()
	{
		cout << '[' << n1 << ',' << n2 << ']';
	}

	void InputData()
	{
		scanf_s("%d %d", &n1, &n2);
	}

	friend ostream& operator<<(ostream& obj1, Point& obj2);

	friend istream& operator>>(istream& obj1, Point& obj2);
};


ostream& operator<<(ostream& obj1, Point& obj2)
{
	obj2.ShowData();
	return obj1;
}

istream& operator>>(istream& obj1, Point& obj2)
{
	obj2.InputData();
	return obj1;
}

int main()
{
	Point pos1;
	cout << "x, y 좌표 순으로 입력 : ";
	cin >> pos1;
	cout << pos1;

	return 0;
}
	