#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()//½×³Ë
{
	int i = 0;
	int n = 0;
	int nn = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		nn = nn * i;
	}
	printf("nn= %d\n", nn);
	return 0;
}

