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
	printf("逆置前\n");
	for (int a = 0; a < z; a++)
	{
		*(ar2 + a) = a;
	}
	print(ar2,z);//打印数组
	printf("\n");
	printf("逆置后\n");

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
		printf("初始化前:arr[%d]=%d\n", a, arr[a]);
	}
	printf("\n");

	//printf("初始化数组\n");
	init(arr,siz);//初始化数组

	printf("打印数组\n");
	print(arr,siz);//打印数组

	reverse(arr, siz);//数组赋值,后逆置数组
	print(arr, siz);//打印数组
	return 0;
}