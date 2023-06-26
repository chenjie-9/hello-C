#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()//½×³ËÖ®ºÍ
{
	int i = 0;
	int nn = 1;
	int sum = 0;
	for (i = 1; i <= 3; i++)
	{
		nn = nn * i;
		sum += nn;
	}
	printf("sum= %d\n", sum);
	return 0;
}

