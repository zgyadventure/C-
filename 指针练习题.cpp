#include<stdio.h>
int main()
{
	unsigned long arr[]={6,7,8,9,10};
	unsigned long *p=arr;
	*(p+3)+=3;
	printf("%d,%d",*p,*(p+3));
	return 0;
}
