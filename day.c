#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b<a+1; b++)
		{
			c = a * b;
			printf("%dX%d=%2d  ",b,a,c);
		}
		printf("\n");
	}
	return 0;
}