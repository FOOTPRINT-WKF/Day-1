#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void my_number(int a)
{
	if (a <= 9)
	{
		printf("%d ", a);
	}
	else
	{
		my_number(a / 10);
		printf("%d ", a % 10);
	}
}

int main()
{
	int number = 0;
	printf("请输入你要分解的数字");
	scanf("%d", &number);
	my_number(number);
	return 0;
}