#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	int a = 60;
	system("color 0a");
	while (a >= 0)
	{
		system("cls");
		printf("%d", a);
		Sleep(1000);
		a = a - 1;
	}
	return 0;
}