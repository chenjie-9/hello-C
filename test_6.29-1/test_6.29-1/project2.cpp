#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <corecrt.h>
#include <conio.h>
void menu()
{
	printf("\n****************************************\n");
	printf("\n**************������Ϸ******************\n");
	printf("\n*�������ʼ���ԣ�������ĸ�����¿�ʼ��ʱ*\n");
	printf("\n**********���������ԡ�����ʾ************\n");
}
int main()
{
	int i = 0;
	char ch;
	char a[51] = "";
	int count = 0;
	time_t start_time, end_time;
	while (1)
	{
		system("cls");
		menu();
		ch = _getch();
		srand((unsigned int)time(NULL));
		for (i = 0; i < 50; i++)
		{
			a[i] = rand() % 26 + 'a';
		}
		a[50] = '\0';
		printf("%s\n", a);
		count = 0;
		for (i = 0; i < 50; i++)
		{
			ch = _getch();
			if (i == 0)
			{
				start_time = time(NULL);

			}
			if (ch == a[i])
			{
				count++;
				printf("%c", ch);
			}
			else 
			{
				printf("_");
			}				
		}
		end_time = time(NULL);
		printf("\n��ȷ�ʣ�%d %c\n", count * 100 / 50, '%');
		printf("��ʱ  %lld��\n", (long int)end_time - start_time);
		while (1)
		{
			ch = _getch();
			if (ch == ' ')
			{
				break;
			}
			if (ch == 27)
			{
				return 0;
			}
		}

	}

	return 0;

}