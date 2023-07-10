#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char buf[20];
	sscanf("jdsfv#djhskvbyfvbeh@db5bgfb", "%*[^#]#%[^@]", buf);
	printf("buf=%s\n", buf);
	return 0;
}