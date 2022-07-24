#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe");
//	}
//	else
//		printf("haha"); 
	if (p1 == p2)
	{
		printf("hehe");
	}
	else
		printf("haha");
	return 0;
}