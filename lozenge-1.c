#define _CRT_SECURE_NO_WARNINGS
#define M 99
#define N 99

#include<stdio.h>
int main()
{
	char arr[M][N];
	char ac = 0;
	scanf("%c",&ac);
	for (int a=0;a<M;a++)
	{
		for (int b = 0; b < N; b++)
		{
			arr[a][b] = '*';
			if (a==0&&b == N / 2 )
				{
					arr[a][b] = ac;
				}
			else 
				if (a<= M/2 && N / 2 - a <= b && b <= N / 2 + a)
				{
					arr[a][b] = ac;
				}
				else
					if (a > M / 2 && a - N / 2 <= b && N-(a-N/2)> b)
					{
					arr[a][b] = ac;
					}
				
		}
	}
	for (int a = 0; a < M; a++)//´òÓ¡Í¼ÐÎ
	{
		for (int b = 0; b < N; b++)
		{
			printf("%c", arr[a][b]);
		}
		printf("\n");
	}
	return 0;
}