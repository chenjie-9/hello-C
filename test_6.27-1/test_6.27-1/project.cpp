#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������Ϸ
void menu()
{
	printf("***********һ����������*************\n");
	printf("********1.play      2.exit**********\n");
	printf("************************************\n");
}
void game()
{
	//1.����һ�������
	int r = 0;
	int guess = 0;
	//ʹ��ʱ������������������ʼ��
	//time_t time(time_t *timer)
	//time_t
	//srand((unsigned int)time(NULL));//���ֲ���
//ʱ���---=��ǰ�����ʱ��-���������ʼʱ�䣨1970.1.1.0:0:0��=(xxxxx)��
	//r=rand();//�������0 - RAND_MAX(32767)֮���һ������
	r = rand()% 100 + 1; 
	//printf("%d\n",r);
	//2.������
	while (1)
	{
		printf("��һ�����֣�");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("����ƫ��\n");
		}
		else if (guess < r)
		{
			printf("����ƫС\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);

	return 0;
}