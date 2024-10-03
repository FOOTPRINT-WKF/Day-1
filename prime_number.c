#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int prime(int x)
{
	if (x<=1)
	{
		return 0;
	}
	for (int i = 2; i*i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	for (a = 100; a < 200; a++)
	{
		if (prime(a))
		{
			printf("%d  ", a);
		}
		
	}
	return 0;
}