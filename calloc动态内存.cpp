#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p=(int*)calloc(10,4);
	int i;
	int j;
	for(j=0;j<10;j++)
	{
		printf("%d",*p);  //calloc申请的空间全赋值0
	}     
	printf("\n");
	for(i=0;i<10;i++)
	{
		*(p+i)=i; 
		printf("%d",*(p+i));
	}        			
	free(p);
	p=NULL;
	return 0;
	
}
