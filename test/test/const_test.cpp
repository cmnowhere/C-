#include <iostream>

using namespace std;

class ArrayClass
{
private:
	int* arr;
	int arrlen;

public:
	ArrayClass(ArrayClass& arr) = delete;
	ArrayClass& operator=(ArrayClass& arr) = delete;

	ArrayClass(int n = 30) :arrlen(n)
	{
		arr = new int[n];
	}

	int& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
			exit(-1);

		return arr[idx];
	}

	int operator[](int idx) const
	{
		if (idx < 0 || idx >= arrlen)
			exit(-1);
		return arr[idx];
	}

	int getlen()const
	{
		return arrlen;
	}

	~ArrayClass()
	{
		delete[]arr;
	}

};

void showdata(const ArrayClass& ref)
{
	int lne = ref.getlen();
	for (int idx = 0; idx < lne; idx++)
		cout << ref[idx] << endl;
}

int main()
{
	ArrayClass ac(10);

	for (int i = 0; i < 10; i++)
		ac[i] = (i + 1) * 11;

	showdata(ac);

	//ac = ac1; 대입연산 금지

	//ArrayClass ac2 = ac; 복사생성자 금지

	return 0;
}