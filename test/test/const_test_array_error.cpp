//#include <iostream>
//
//using namespace std;
//
//class ArrayClass
//{
//private:
//	int *arr;
//	int len;
//public:
//	ArrayClass(ArrayClass& arr) = delete;
//	ArrayClass& operator=(ArrayClass& arr) = delete;
//
//	ArrayClass(int n = 30) :len(n) 
//	{
//		arr = new int[n];
//	}
//
//	int& operator[](int idx)
//	{
//		if (idx < 0 || idx >= len)
//			exit(-1);
//
//		return arr[idx];
//	}
//	
//	int operator[](int idx) const
//	{
//		if (idx < 0 || idx >= len)
//			exit(-1);
//
//		return arr[idx];
//	}
//
//	//int getlen() const
//	//{
//	//	return len;
//	//}
//
//	//int& getlen() const 
//	//{
//	//	len = 10;		    // const �Լ��� �Լ� ������ ���� ������ ������� ����.
//	//	//return arr[0];  // �̴� ������ ���ϸ� ��ü�� ����� �ƴ� ��ü�� ����� ����Ű�� ����̹Ƿ� ��ȯ�� �� ����
//
//	//	return len;		   // const �Լ��� �Լ� ������ ���� ������ ������� ����. �̸� ������� ��ü�� ���������� ��ȯ�� �� ����
//	//}
//
//	~ArrayClass()
//	{
//		delete[]arr;
//	}
//
//};
//
//void showdata(const ArrayClass& ref)
//{
//	int len = ref.getlen();
//	for (int idx = 0; idx < len; idx++)
//		cout << ref[idx] << endl;
//}
//
//int main()
//{
//	ArrayClass ac;
//	ArrayClass aco(100);
//
//	ArrayClass ac1;
//
//	ac[0] = 10;
//
//	//ac = ac1; ���Կ��� ����
//
//	//ArrayClass ac2 = ac; ��������� ����
//
//	return 0;
//}