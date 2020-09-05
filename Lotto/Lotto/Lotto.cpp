#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void sortfunc(int(*ptr)[6])
{
	int save;
	for (int k = 0; k < 5; k++)
	{
		for (int i = 5; i > 0; i--)
		{
			for (int j = 0; j < 5; j++)
			{
				if (ptr[k][j] >= ptr[k][j + 1])
				{
					save = ptr[k][j + 1];
					ptr[k][j + 1] = ptr[k][j];
					ptr[k][j] = save;
				}
			}

		}
	}

}
int main()
{
	system("mode con: cols=26 lines=10");
	int save[5][6];
	srand((unsigned int)time(NULL));


	for (int i = 0; i < 3; i++)
	{
		printf("- ");
		Sleep(10);
	}
	printf("로 ");
	Sleep(100);
	printf("또 ");
	Sleep(10);
	printf("추 ");
	Sleep(100);
	printf("첨 ");
	Sleep(100);
	printf("중 ");
	Sleep(100);
	for (int i = 0; i < 3; i++)
	{
		printf("- ");
		Sleep(10);
	}

	printf("\n");
	Sleep(100);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			save[i][j] = rand() % 45 + 1;
			for (int n = 0; n < j; n++)
			{
				if (save[i][j] == save[i][n])
				{
					j--;
					break;
				}
			}
		}
	}

	sortfunc(save);

	for (int i = 0; i < 5; i++)
	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i + 3);
		for (int j = 0; j < 6; j++)
		{
			Sleep(500);

			if (j == 0)
			{
				printf(" ->");
				Sleep(100);
			}

			printf("%3d", save[i][j]);
			if (j == 5)
			{
				Sleep(100);
				printf("  <-");
				Sleep(100);
			}
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 26; i++)
	{
		printf("-");
		Sleep(10);
	}

	printf("\n");
	printf("        Make by Changmin");
	system("pause >nul");

	return 0;
}