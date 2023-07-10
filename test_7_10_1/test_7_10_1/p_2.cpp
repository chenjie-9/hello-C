#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
unsigned int my_strlen(const char* s)//×Ö·û´®¸öÊý
{
	const char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}
int main()
{
	int num;
	num = my_strlen("hhhhh");
	printf("num=%d\n", num);
	return 0;
}