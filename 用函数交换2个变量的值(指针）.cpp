#include <stdio.h>
int swap(int* x,int* y)
{
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
int main()
{
	int a=10;
	int b=20;
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	return 0;
	
}
