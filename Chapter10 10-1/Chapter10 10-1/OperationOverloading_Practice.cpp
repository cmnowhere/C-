//#include <iostream>
//
//using namespace std;
//
//class Test1
//{
//	int n1, n2;
//
//public:
//	Test1(int a = 0, int b = 0) :n1(a), n2(b) {}
//
//	Test1 operator+=(Test1& obj)
//	{
//		Test1 t(n1 + obj.n1, n2 += obj.n2);
//	
//		return t;
//	}
//	bool operator==(Test1& obj)
//	{
//		if (n1 == obj.n1 && n2 == obj.n2)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	Test1 operator*(Test1& obj1)
//	{
//		Test1 t(n1 * obj1.n1, obj1.n2* n2);
//
//		return t;
//	}
//
//	Test1& operator++(int)
//	{
//		n1++;
//		n2++;
//		return *this;
//	}
//
//	Test1& operator~()
//	{
//		n1 = ~n1;
//		n2 = ~n2;
//		return *this;
//	}
//
//	Test1& operator-()
//	{
//		int swap = n2;
//		n2 = -n1;
//		n1 = -swap;
//		return *this;
//	}
//
//	Test1 operator+(int num)
//	{
//		Test1 t(n1 + num, n2 + num);
//		return t;
//	}
//	void ShowOperation() const
//	{
//		cout << n1 << ' ' << n2 << endl;
//	}
//};
//
//int main()
//{
//	Test1 t1(1, 1);
//	Test1 t2(5, 4);
//	Test1 t3(3, 3);
//	t3 = t3 + 5;
//	t3.ShowOperation();
//
//	~t1;
//
//	t1.ShowOperation();
//
//	-t2;
//	t2.ShowOperation();
//	return 0;
//}