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
	int number1 = 0;//������һ����
	int number2 = 0;//�����ڶ�����
	ac:
	printf("������Ҫ������������(�м��ÿո����ȷ�Ϻ󰴻س�)>_");
	while (scanf("%d%d", &number1, &number2) != EOF)//��ȡ������
	{
		system("cls");
		printf("ת��֮ǰ\n");
		printf("��һ����=%d\n", number1);
		printf("�ڶ�����=%d\n", number2);
		exchange_1(&number1, &number2);
		printf("ת��֮��\n");
		printf("��һ����=%d\n", number1);
		printf("�ڶ�����=%d\n", number2);
		goto ac;
	}
	return 0;
}