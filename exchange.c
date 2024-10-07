#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
void exchange_1(int* xp, int* yp)
{
	int a = 0;
	a = *xp;
	*xp = *yp;
	*yp = a;
}
int main()
{
	int number1 = 0;//创建第一个数
	int number2 = 0;//创建第二个数
	ac:
	printf("输入想要交换的两个数(中间用空格隔开确认后按回车)>_");
	while (scanf("%d%d", &number1, &number2) != EOF)//获取两个数
	{
		system("cls");
		printf("转换之前\n");
		printf("第一个数=%d\n", number1);
		printf("第二个数=%d\n", number2);
		exchange_1(&number1, &number2);
		printf("转换之后\n");
		printf("第一个数=%d\n", number1);
		printf("第二个数=%d\n", number2);
		goto ac;
	}
	return 0;
}