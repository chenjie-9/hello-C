#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int y, m, d;
	int i, sum=0;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入年 月 日：\n");
	scanf("%d %d %d", &y, &m, &d);
	for (i = 0; i < m - 1; i++)
	{
		sum = sum + a[i];
	}
	sum = sum + d;
	if ((m > 2) && (y % 4==0 && y % 100!=0 || y % 400==0))
	{
		
		sum = sum + 1;		
	}
	printf("sum=%d \n", sum);
	return 0;
}