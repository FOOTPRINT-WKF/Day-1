#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void gemas()
{
	int s = 0;
gemas1:
	printf("游戏已经开始,请开始你的表演!\n");
	printf("请猜出我刚刚写的一个数!\n");
	int ret = rand() % 100 + 1;
	//printf("%d\n",ret);
	while (1)
	{
		scanf("%d", &s);
		if (s > ret)
		{
			system("cls");
			printf("猜大了>_");
		}
		else if (s < ret)
		{
			system("cls");
			printf("猜小了>_");
		}
		else if (s == ret)
		{
			int b = 0;
			printf("真牛逼,居然猜对了\n");
			printf("是否继续游戏!\n继续请按:1\n退出主菜单请按:0\n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				goto gemas1;
			case 0:
				goto AB1;
			default:
				printf("我猜你不想玩了,不想玩请按:0\n");
				break;
			}
		}
		AB1:
		break;
	}
}
 
void print()
{
	printf("**********************\n");
	printf(" ***  1.开始游戏  ***\n");
	printf(" ***  0.退出游戏  ***\n");
	printf("**********************\n");
}
int main()
{
	int number = 0;
	srand((unsigned)time(NULL));
	do
	{
		print();
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			gemas();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("嘿!你越界了\n");
			break;
		}
	} while (number);
	return 0;
}