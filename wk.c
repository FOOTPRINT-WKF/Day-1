#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int  b = 0;
    while(1)
    {
        scanf("%d", &b);

        for (int t = 0; t < b; t++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}