#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float number = 0;
	float number2 = 0;
	float sum = 0;
	int i = 0;
	for ( i = 2; i <= 100; i++)
	{
		if (i%2==1)
		{
			number = number+(1.0/i);
		}
		else
			if (i%2==0)
			{
				number2 = number2-(1.0 / i);
			}
	}
	sum = 1 + number + number2;
	printf("%f\n", sum);
	return 0;
}