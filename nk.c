#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int mas_n(int x,int y)
//{
//    if (y==0)
//    {
//        return 1;
//    }
//    else
//    {
//        return x * mas_n(x, y - 1);
//    }
//    
//}
//
//int main()
//{
//	int n = 0;
//    int k = 0;
//    printf("�������������м��ÿո����");
//	scanf("%d %d",&n,&k);
//    printf("n��k�η���%d", mas_n(n, k));
//	return 0;
//}



//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
sum(int x)
{
	if (x<9)
		return x;
	else
		return sum(x / 10)+x%10;
}
int main()
{
	int number = 0;
	printf("������һ����");
	scanf("%d", &number);
	printf("%d", sum(number));
	return 0;
}