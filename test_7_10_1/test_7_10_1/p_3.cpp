#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strcpy(char* dest, const char* src)
{
	char* p1 = dest;
	const char* p2 = src;
	while (*p2 != '\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	return dest;

}
int main()//¸´ÖÆ
{
	char buf[20];
	my_strcpy(buf, "hhhhh");
	printf("buf=%s\n", buf);
	return 0;
}