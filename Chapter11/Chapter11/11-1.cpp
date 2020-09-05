//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Gun
//{
//private:
//	int bullet;    	// 장전된 총알의 수
//public:
//	Gun(int bnum) : bullet(bnum)
//	{ }
//	void Shut()
//	{
//		cout << "bullet : " << bullet << endl;
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//};
//
//class Police
//{
//private:
//	int handcuffs;    // 소유한 수갑의 수
//	Gun* pistol;     // 소유하고 있는 권총
//public:
//	Police(const Police& obj):handcuffs(obj.handcuffs)
//	{
//		if (obj.pistol != NULL)
//			pistol = new Gun(*(obj.pistol)); 					
//		else						
//			pistol = NULL;
//	}
//
//	Police& operator=(Police& obj) // Police x1 = x2; x1.operator(x2)
//	{
//		if(pistol!=NULL)
//			delete[]pistol;
//		handcuffs = obj.handcuffs;
//		if (obj.pistol != NULL)
//			pistol = new Gun(*(obj.pistol));
//		else
//			pistol = NULL;
//		return *this;
//	}
//
//	Police(int bnum, int bcuff)
//		: handcuffs(bcuff)
//	{
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//	void PutHandcuff()
//	{
//		cout << "handcuffs : " << handcuffs << endl;
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//	void Shut()
//	{
//		if (pistol == NULL)
//			cout << "Hut BBANG!" << endl;
//		else
//			pistol->Shut();
//	}
//	~Police()
//	{
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main(void)
//{
//	Police pman1(5, 3);
//	pman1.Shut();
//	pman1.PutHandcuff();
//	cout << endl;
//	
//	Police pman2(0, 3);     // 권총소유하지 않은 경찰
//	pman2.Shut();
//	pman2.PutHandcuff();
//
//	cout << endl;
//	Police pman3 = pman1;
//	pman3.Shut();
//	pman3.PutHandcuff();
//
//	cout << endl;
//	pman3 = pman2;
//	pman3.Shut();
//	pman3.PutHandcuff();
//
//	return 0;
//}