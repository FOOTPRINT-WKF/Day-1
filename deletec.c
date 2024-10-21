#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

print(int*at1,int*at2)
{
    for (int a = 0; a < 2; a++)
    {
        printf("变化后arr1[%d]=%d\n", a, *(at1+a));
    }
    for (int a = 0; a < 2; a++)
    {
        printf("变化后arr2[%d]=%d\n", a, *(at2+a));
    }

}

void srr(int* ar1, int* ar2)
{
    int third = 0;
    for (int a = 0; a < 2; a++)
    {
        third = *(ar1 + a);
        *(ar1 + a) = *(ar2 + a);
        *(ar2 + a) = third;
    }
    print(ar1,ar2);
}

int main()
{
    int arr1[2] = { 1,2 };
    int arr2[2] = { 3,4 };
    for (int a = 0; a < 2; a++)
    {
        printf("变化前arr1[%d]=%d\n", a, arr1[a]);
    }
    for (int a = 0; a < 2; a++)
    {
        printf("变化前arr2[%d]=%d\n", a, arr2[a]);
    }

    srr(arr1, arr2);
    return 0;
}