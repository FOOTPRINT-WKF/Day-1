#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int leap_year(int n)
{
	if (n%100==0)
	{
		if (n % 400 == 0)
			return 1;
		else
			return 0;
	}
	if (n % 4 == 0)
	{
		return 1;
	}
	else
		return 0;
	
	return 0;
}
int main()
{
	for (int a = 1000; a < 2000; a++)
	{
		if (leap_year(a))
		{
			printf("%d  ", a);
		}
	}
	return 0;
}