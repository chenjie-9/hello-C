#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int my_atoi(const char* str)//转换为整数输出
{
	int temp = 0;
	while (*str != '\0')
	{
		temp = temp * 10 + (*str - '0');
		str++;
	}
	return temp;

}
int main()
{
	int num;
	num = my_atoi("4256");
	printf("num=%d\n", num);
	return 0;
}