#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[100];
	sscanf("[ti:¼òµ¥°®]", "%*[^:]%*c%[^]]", buf);
	printf("buf=%s\n",buf);
	return 0;
}