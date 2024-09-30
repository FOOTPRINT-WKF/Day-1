#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int M = 0;
    scanf("%d", &M);
    while (scanf("%d", &M) != EOF)
    {
        if (M % 5 == 0)
            printf("YES");
        else
            printf("NO");

    }
    return 0;
}