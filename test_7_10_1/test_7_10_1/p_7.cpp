#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
	char buf[90] = "helloworldhelloworldhelloworld";
	char* p;
	char* q = buf;
	int num = 0;
	while ((p = strchr(q, 'h') )!= NULL)
	{
		num++;
		printf("��%d��h��λ��:%d\n", num,p-buf);
		q = p + 1;

	}
	printf("�ܹ��ҵ���%d���ַ� h\n", num);	
	return 0;
}