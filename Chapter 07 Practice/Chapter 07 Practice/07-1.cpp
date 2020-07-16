#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car() :gasolineGauge(100) {}
	Car(int g) :gasolineGauge(g) {}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybriedCar :public Car
{
	int electricGauge;
public:
	HybriedCar() :electricGauge(100) {}
	HybriedCar(int n) :electricGauge(n), Car(n) {}

	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar :public HybriedCar
{
	int waterGauge;
public:
	HybridWaterCar() :waterGauge(100) {}
	HybridWaterCar(int n) :waterGauge(n), HybriedCar(n) {}
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};

//int main()
//{
//	HybridWaterCar c1;
//	HybridWaterCar c2(33);
//
//	c1.ShowCurrentGauge();
//	c2.ShowCurrentGauge();
//
//	return 0;
//}