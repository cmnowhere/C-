//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class gun
//{
//private:
//	int bullet;    	// ������ �Ѿ��� ��
//public:
//	gun(int bnum) : bullet(bnum)
//	{
//		cout << "gun ��ä ����" << endl;
//	}
//
//	gun(const gun& obj) : bullet(obj.bullet)
//	{
//		cout << "gun ���� ������ ȣ��" << endl;
//	}
//};
//
//class police
//{
//private:
//	int handcuffs;    // ������ ������ ��
//	gun* pistol;     // �����ϰ� �ִ� ����
//public:
//	police(int bnum, int bcuff)
//		: handcuffs(bcuff)
//	{
//		if (bnum > 0)
//			pistol = new gun(bnum);
//		else
//			pistol = NULL;
//
//		cout << "police ��ü ����" << endl;
//	}
//
//	police(const police& obj) :handcuffs(obj.handcuffs) // �ܼ��� �޸� ������ ������ ���·� obj�� pman1�� ��������. ���� �⺻������, ��������ڴ� ȣ���� �ȵ�.  
//	{
//		if (obj.pistol != NULL)
//			pistol = new gun(*(obj.pistol)); // gun ��ü�� �����ϸ鼭 ��������ڸ� ȣ���ϰ� ���� gun(gun& obj);
//		else							
//			pistol = NULL;
//
//		cout << "police ���� ������ ȣ��" << endl;
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
//	cout << "//��������� ȣ��//" << endl << endl;
//
//	police pman2=pman1; // 1. obj �ӽ� ��ü�� �������, obj�� pman1�� �ʱ�ȭ �� ��, ����������� �Ű��������� obj=pman1 ���·� �ʱ�ȭ�� �̷����
//
//	return 0;
//}