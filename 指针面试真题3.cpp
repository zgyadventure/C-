#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main()
{
	int arr[4] = { 1,2,3,4 };
	int* p1 = (int*)(&arr + 1);
	int *p2=(int*)((int)arr+1);
	printf("%x %x", p1[-1],*p2);
	return 0;
}