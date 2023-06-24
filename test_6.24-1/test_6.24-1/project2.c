#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()//½»»»´ÎÐò
{
	int a = 5;
	int b = 9;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d%d", a, b);
	return 0;
}