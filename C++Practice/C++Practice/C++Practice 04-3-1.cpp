#include <iostream>

using namespace std;

class test
{
private:
	int num;

public:
	test() :num(100)
	{
		cout << "기본생성자 생성완료" << endl;
	}

	test(test& ref)
	{
		num = ref.num;
		cout << "복사생성자 생성완료" << endl;
	}

};

int main()
{
	const test t1;
	test t2 = t1;

	return 0;
}

