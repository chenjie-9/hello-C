#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define P 3.14
int main()
{
	double r, h, c, s, S, V, v;
	printf("«Î ‰»Î‘≤∞Îæ∂r,‘≤÷˘∏ﬂh:");
	scanf("%lf%lf",&r,&h);
	c = 2 * P * r;
	s = P * r * r;
	S = 4 * P * r * r;
	V = 3.0 / 4.0 * P * r * r * r;
	v = P * r * r * h;
	printf("c=%6.2lf\n", c);
	printf("s=%6.2lf\n", s);
	printf("S=%6.2lf\n", S);
	printf("V=%6.2lf\n", V);
	printf("v=%6.2lf\n", v);
	return 0;
}
/*int main()
{
	char c1, c2;
	c1 = 97;
	c2 = 65;
	printf("%c %c\n", c1, c2);
	return 0;
}*/