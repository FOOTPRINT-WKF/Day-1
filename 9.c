#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	int b = 0;
	for (b = 0; b < 10; b++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i ==9 || b==9)
			{
				a++;
				printf("µÚ%d¸ö%d%d\n",a,b,i);
			}
		}
	}
	printf("%d\n",a);
	
	return 0;
}