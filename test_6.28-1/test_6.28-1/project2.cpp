#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int sum = 0;
	int y, m, d;
	printf("请输入年 月 日：\n");
	scanf("%d %d %d", &y, &m, &d);
	switch (m)
	{
	case 1:
		sum = d;
		break;
	case 2:
		sum = 31 + d;
		break;
	case 3:
		sum = 31 + 28+d;
		break;
	case 4:
		sum = 31 + 31 + 28 + d;
		break;
	case 5:
		sum = 31 + 28 + 31 + 30 + d;
		break;
	case 6:
		sum = 31 + 28 + 31 + 30 + 31 + d;
		break;
	case 7:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + d;
		break;
	case 8:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
		break;
	case 9:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
		break;
	case 10:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
		break;
	case 11:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
		break;
	case 12:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
		break;
	default:
		sum = 0;
		printf("输入有误！");
	}
	if ((m>2)&&(y % 4 == 0 && y % 100 != 0)||(y%400==0))
	{
		sum = sum + 1;

	}
	printf("%d %d %d是一年中第%d天\n",y,m,d,sum);
	return 0;
}