#include<stdio.h>
int main()
{
	int i;
	int a=10;
	int b=20;
	int c=30;
	int* p1=&a;
	int* p2=&b;
	int* p3=&c;
	int* arr[10]={p1,p2,p3};
	for(i=0;i<=2;i++)
	{
	printf("%p\n",arr[i]);
    }
	return 0;
}
