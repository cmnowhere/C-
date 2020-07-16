#include <iostream>

using namespace std;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER }; // ���, ����, �븮, ����

	void ShowGradeInfo(int n)
	{
		switch (n)
		{
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
			break;
		}
	}
};

class NameCard
{
	char* Name;
	char* CompName;
	char* PhonNum;
	int grade;
public:
	NameCard(const char* name, const char* compname, const char* phonnum,int n) :grade(n)
	{
		Name = new char[strlen(name) + 1];
		CompName=new char[strlen(compname) + 1];
		PhonNum=new char[strlen(phonnum) + 1];
		strcpy_s(Name,strlen(name)+1, name);
		strcpy_s(CompName,strlen(compname)+1, compname);
		strcpy_s(PhonNum,strlen(phonnum)+1, phonnum);	
	}

	void ShowNameCardInfo()
	{
		cout << "�̸� : " << Name << endl;
		cout << "ȸ�� : " << CompName << endl;
		cout << "��ȭ��ȣ : " << PhonNum << endl;
		cout << "���� : ";
		COMP_POS::ShowGradeInfo(grade);
		cout << endl;
	}

	~NameCard()
	{
		delete[]Name;
		delete[]CompName;
		delete[]PhonNum;
	}
};

//int main()
//{
//	namecard manclerk("lee", "abceng", "010-1111-2222", comp_pos::clerk);
//	namecard mansenior("hong", "orangeeng", "010-3333-4444", comp_pos::senior);
//	namecard manassist("kim", "sogoodcomp", "010-5555-4444", comp_pos::assist);
//	manclerk.shownamecardinfo();
//	mansenior.shownamecardinfo();
//	manassist.shownamecardinfo();
//
//	return 0;
//}