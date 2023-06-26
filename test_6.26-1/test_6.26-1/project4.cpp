#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//有序数组查找元素
int main(){
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int m = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (m== arr[i])
		{
			printf("找到了！下标为：%d\n",i);
			break;
		}		
	}
	if (i == sz)
			printf("没找到");
	return 0;
}