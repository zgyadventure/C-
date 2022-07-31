#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *p=(int*)(&arr+1);
	printf("%d %d",*(arr+1),*(p-1));
	return 0;
}
