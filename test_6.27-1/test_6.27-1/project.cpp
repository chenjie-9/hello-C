#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//猜数字游戏
void menu()
{
	printf("***********一起来猜数字*************\n");
	printf("********1.play      2.exit**********\n");
	printf("************************************\n");
}
void game()
{
	//1.生成一个随机数
	int r = 0;
	int guess = 0;
	//使用时间戳设置随机数生成起始点
	//time_t time(time_t *timer)
	//time_t
	//srand((unsigned int)time(NULL));//数字不变
//时间戳---=当前计算机时间-计算机的起始时间（1970.1.1.0:0:0）=(xxxxx)秒
	//r=rand();//随机生成0 - RAND_MAX(32767)之间的一个数字
	r = rand()% 100 + 1; 
	//printf("%d\n",r);
	//2.猜数字
	while (1)
	{
		printf("猜一个数字：");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("数字偏大\n");
		}
		else if (guess < r)
		{
			printf("数字偏小\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);

	return 0;
}