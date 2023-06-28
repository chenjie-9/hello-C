#define _crt_secure_no_warnings 1
#include <stdio.h>
int main()
{
	int i = 0;
	int a, b, c;
	for (i = 0; i <= 999; i++)
	{
		a = i / 100;//百位
		b = i % 100 / 10;//十位
		c = i % 10;//个位
		if (i == a*a*a +b*b*b +c*c*c)
		{
			printf("i= %d\n", i);
		}
	}
	return 0;
}
