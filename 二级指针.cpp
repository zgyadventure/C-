#include<stdio.h>
int main()
{
	int a=10;
	int* p1=&a;
	int** p2=&p1;
	printf("%p\n%p\n",p1,p2);
	printf("%p\n%d",*p2,**p2);
}
