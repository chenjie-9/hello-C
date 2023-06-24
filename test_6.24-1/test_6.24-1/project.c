#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//求最大值
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d%d", &a, &b);
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}