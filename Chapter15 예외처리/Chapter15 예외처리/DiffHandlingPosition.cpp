//#include <iostream>
//
//using namespace std;
//
//int squarefunc(int n, int len)
//{
//	int sum = n;
//	for (int i = 0; i < len-1; i++)
//		sum *= 10;
//	return sum;
//}
//
//int StoI(char str[])
//{
//	int len = strlen(str);
//
//	int x = '0' - 0;
//	int sum = 0;
//	for (int i = 0; i < len; i++) // 100 �̶�� len �� 3 str[0]= 1, str[1]=0, str[2]=0
//	{
//		if (str[i] <= '0' || str[i] >= '9')
//			throw str[i];
//		sum += squarefunc(str[i]-x, len - i);
//	}
//	return sum;
//};
//
//
//int main()
//{
//	int num;
//	char str1[100];
//	while (1)
//	{
//		cout << "���ڸ� �Է��Ͻÿ� : ";
//		cin >> str1;
//		try
//		{
//			num = StoI(str1);
//			cout << "num : " << num << endl;
//			cout << "sizeof(num) : " << sizeof(num) << endl;
//			break;
//		}
//		catch (char expn)
//		{
//			cout <<"\""<< expn << "��(��) ���ڰ� �ƴմϴ�. �ٽ� �Է��ϼ���.\"" << endl;
//		}
//	}
//	return 0;
//}