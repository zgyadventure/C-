#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* arr[] = { &a,&b,&c };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%p\n", arr[i]);
	}
	return 0;
}