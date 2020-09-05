//#include <iostream>
//
//using namespace std;
//
//class SortRule
//{
//public:
//	virtual bool operator()(int num1, int num2) const = 0;
//};
//
//class AscendingSort : public SortRule
//{
//	bool operator()(int num1, int num2) const
//	{
//		if (num1 > num2)
//			return true;
//		else
//			return false;
//	}
//};
//
//class DescendingSort :public SortRule
//{
//	bool operator()(int num1, int num2) const
//	{
//		if (num1 < num2)
//			return true;
//		else
//			return false;
//	}
//};
//
//class DataStorage
//{
//private:
//	int* arr;
//	int idx;
//	const int MAX_LEN;
//
//public:
//	DataStorage(int arrlen) :idx(0), MAX_LEN(arrlen)
//	{
//		arr = new int[MAX_LEN];
//	}
//	void AddData(int num)
//	{
//		if (MAX_LEN <= idx)
//		{
//			cout << "저장 불가" << endl;
//			return;
//		}
//		arr[idx++] = num;
//	}
//
//	void ShowData()
//	{
//		for (int i = 0; i < idx; i++)
//			cout << arr[i] << ' ';
//		cout << endl;
//	}
//
//	void SortData(const SortRule& functor)
//	{
//		for (int i = 0; i < (idx - 1); i++)
//		{
//			for (int j = 0; j < (idx - 1) - i; j++)
//			{
//				if (functor(arr[j], arr[j + 1]))
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//};
//
//int main()
//{
//	DataStorage storage(5);
//	storage.AddData(10);
//	storage.AddData(19);
//	storage.AddData(50);
//	storage.AddData(20);
//	storage.AddData(14);
//
//	storage.SortData(AscendingSort());
//	storage.ShowData();
//
//	storage.SortData(DescendingSort());
//	storage.ShowData();
//
//	return 0;
//}