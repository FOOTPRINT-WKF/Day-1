#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10];
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int  t = 0; t < 10; t++)
	{
		if (arr[t] > max)
			max = arr[t];
	}
	printf("%d", max);
	return 0;
}