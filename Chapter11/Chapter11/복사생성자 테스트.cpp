//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class gun
//{
//private:
//	int bullet;    	// 장전된 총알의 수
//public:
//	gun(int bnum) : bullet(bnum)
//	{
//		cout << "gun 객채 생성" << endl;
//	}
//
//	gun(const gun& obj) : bullet(obj.bullet)
//	{
//		cout << "gun 복사 생성자 호출" << endl;
//	}
//};
//
//class police
//{
//private:
//	int handcuffs;    // 소유한 수갑의 수
//	gun* pistol;     // 소유하고 있는 권총
//public:
//	police(int bnum, int bcuff)
//		: handcuffs(bcuff)
//	{
//		if (bnum > 0)
//			pistol = new gun(bnum);
//		else
//			pistol = NULL;
//
//		cout << "police 객체 생성" << endl;
//	}
//
//	police(const police& obj) :handcuffs(obj.handcuffs) // 단순히 메모리 공간을 참조값 형태로 obj는 pman1의 참조자임. 따라서 기본생성자, 복사생성자는 호출이 안됨.  
//	{
//		if (obj.pistol != NULL)
//			pistol = new gun(*(obj.pistol)); // gun 객체를 생성하면서 복사생성자를 호출하고 있음 gun(gun& obj);
//		else							
//			pistol = NULL;
//
//		cout << "police 복사 생성자 호출" << endl;
//	}
//
//	~police()
//	{
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main(void)
//{
//	police pman1(5, 3);
//
//	cout << endl;
//	cout << "//복사생성자 호출//" << endl << endl;
//
//	police pman2=pman1; // 1. obj 임시 객체가 만들어짐, obj는 pman1로 초기화 됨 즉, 복사생성자의 매개변수에서 obj=pman1 형태로 초기화가 이루어짐
//
//	return 0;
//}