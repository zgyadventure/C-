#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
	int* p=(int*)malloc(100);
	if(p==NULL)
	{
		printf("%s",strerror(errno));
	}
	int i;
	int arr[20];
	p=arr;
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
		printf("%d",*(p+i));
	}
	free(p);
	return 0;
}
