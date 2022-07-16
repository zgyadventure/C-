#include<stdio.h>
int main()
{
	int i;
	int arr1[10]={0};
	char arr2[10]={0}; 
	int* p1=arr1;
	char* p2=arr2;
	printf("%p\n",p1);
	printf("%p\n",p1+1);
	for(i=0;i<10;i++)
	{
		*(p1+i)=1;
		printf("%d\n",arr1[i]);
	}
	printf("%p\n",p2);
	printf("%p\n",p2+1);
	return 0;
}
