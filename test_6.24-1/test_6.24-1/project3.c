#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求十个数中最大值
int main()
{
	int i = 0;
	int a = 0;
	int max = 0;
	scanf("%d", &max);
	while (i < 9)
	{
		scanf("%d",&a);
		if (a > max)
		{
			max = a;
		}
		i += 1;
	}
	printf("max=%d\n", max);
	return 0;
}