#include<stdio.h>
int main()
{
	int a=9;
	float* p=(float*)&a;
	printf("%d\n",a);
	printf("%f\n",*p);
	*p=9.0;
	printf("%d\n",p);
	printf("%f",*p);
	return 0;
}
