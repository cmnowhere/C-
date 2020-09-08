#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class sort
{

};

int main()
{
	int arr[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		arr[i] = rand()%10;

	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';

	return 0;
}