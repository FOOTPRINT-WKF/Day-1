#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubble(int*x,int y)
{
	for(int a=0;a<y-1;a++)//循环二次,第一次有两次比较的机会
	{
		for (int b = 0; b < y - a-1; b++)
		{
			if(x[b]<x[b+1])
			{
				int z = 0;
				z = x[b];
				x[b] = x[b + 1];
				x[b + 1] = z;
		    }
		}

	}
	for (int a = 0; a < y ; a++)
	{
		printf("%d ", *(x + a));

	}
}


  int main()
 {
	int number1 = 0;
	int number2 = 0;
	int siz = 0;
	int arr[3] = { 0 };
	while (scanf("%d", &number1) != EOF)
	{
		arr[number2] = number1;
		number2++;
		if (number2 == 3)
			break;
	}
	siz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, siz);
	  /*int a=scanf("%d", &number1);
	  printf("%d\n",a);*/
	return 0;
}