#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void init(int * ar,int x)
{
	for (int a = 0; a < x; a++)
	{
		if (*(ar+a) != 0)
		{
			*(ar + a) = 0;
		}
	}
}

void print(int*ar1, int y)
{
	for (int a = 0; a < y; a++)
	{
		printf("arr[%d]=%d  ", a, *(ar1+a));
	}
}

void reverse(int *ar2, int z)
{
	printf("\n");
	printf("����ǰ\n");
	for (int a = 0; a < z; a++)
	{
		*(ar2 + a) = a;
	}
	print(ar2,z);//��ӡ����
	printf("\n");
	printf("���ú�\n");

	for (int i = 0; i < z; i++)
	{
		for (int a = 0; a < z-i; a++)
		{
			if (*(ar2 + a) < *(ar2 + a+1))
			{
				int ac = 0;
				ac = *(ar2 + a);
				*(ar2 + a) = *(ar2 + a+1);
				*(ar2 + a+1) = ac;
			}
		}
	}
}

int main()
{
	int arr[10];
	int siz = 0;
	siz = sizeof(arr) / sizeof(arr[0]);
	for (int a = 0; a < siz; a++)
	{
		printf("��ʼ��ǰ:arr[%d]=%d\n", a, arr[a]);
	}
	printf("\n");

	//printf("��ʼ������\n");
	init(arr,siz);//��ʼ������

	printf("��ӡ����\n");
	print(arr,siz);//��ӡ����

	reverse(arr, siz);//���鸳ֵ,����������
	print(arr, siz);//��ӡ����
	return 0;
}