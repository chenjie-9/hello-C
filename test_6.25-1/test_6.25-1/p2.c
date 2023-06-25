#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	while (i <= 100)
	{
		sum += i;
		i+=1;	
	}
	printf("sum=%d\n", sum);
	return 0;
}