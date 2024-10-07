#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long  sum(int x)
{
     long long sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n = 0;
    long long sum1 = 0;
    while (scanf("%d", &n) != EOF)
    {
        sum1 = sum(n);
        printf("%lld\n", sum1);

    }
    return 0;
}