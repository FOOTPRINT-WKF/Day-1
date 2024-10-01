#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void max(int x, int y)
{
	if (x - y < 0)
		printf("%d\n", y);
	else
		if (x - y > 0)
		{
			printf("%d\n", x);
		}
		else
			printf("ПаµИ\n");
}
int main()
{
	int a = 0;
	int b = 0;
	
	while (scanf("%d%d", &a, &b)!=EOF)
	{
		max(a, b);
	}
	return 0;
}