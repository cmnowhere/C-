#include <iostream>
using namespace std;

class Simple
{
	int num;
public:
	Simple(int n) :num(n)
	{
		cout << "New Object: " << this << endl;
	}
	Simple(const Simple& copy) :num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~Simple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

Simple SimpleFunc(Simple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
}

//int main()
//{
//	Simple obj(5); // 생성자 호출과 함께 New Object : obj 주소 출력 
//	SimpleFunc(obj); // 임시 객체 ob가 생성되면서 obj 인자가 전달 됨, New Copy : ob 주소 출력, Parm ADR: ob 주소 출력,return 하면서 ob 주소 출력, Destroy obj : ob객체의 주소 출력, return ob주소 출력
//
//	cout << endl;
//
//	Simple tempRef = SimpleFunc(obj); // 임시 ob 객체 생성, New 출력, Copy 출력, Parm ADR : 새로운 임시 ob 객체 주소 출력, ob 객체는 소멸되며, ob 객체를 tempRef에 반환
//									  // tempRef는 New Copy 출력
//	cout << "Return Obj " << &tempRef << endl; // tempRef 주소값 출력 
//	return 0;
//}