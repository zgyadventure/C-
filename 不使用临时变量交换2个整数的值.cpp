#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);
	//�Ӽ���
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a=%d b=%d\n", a, b);
	
	//��λ���
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
	return 0;

}