#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void gemas()
{
	int s = 0;
gemas1:
	printf("��Ϸ�Ѿ���ʼ,�뿪ʼ��ı���!\n");
	printf("��³��Ҹո�д��һ����!\n");
	int ret = rand() % 100 + 1;
	//printf("%d\n",ret);
	while (1)
	{
		scanf("%d", &s);
		if (s > ret)
		{
			system("cls");
			printf("�´���>_");
		}
		else if (s < ret)
		{
			system("cls");
			printf("��С��>_");
		}
		else if (s == ret)
		{
			int b = 0;
			printf("��ţ��,��Ȼ�¶���\n");
			printf("�Ƿ������Ϸ!\n�����밴:1\n�˳����˵��밴:0\n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				goto gemas1;
			case 0:
				goto AB1;
			default:
				printf("�Ҳ��㲻������,�������밴:0\n");
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
	printf(" ***  1.��ʼ��Ϸ  ***\n");
	printf(" ***  0.�˳���Ϸ  ***\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��!��Խ����\n");
			break;
		}
	} while (number);
	return 0;
}