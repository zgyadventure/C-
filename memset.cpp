#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[10]="";
	int arr2[]={0};
	memset(arr1,'*',10);       //放入10个字节 
	memset(arr2,1,10);
	printf("%s\n",arr1);
	printf("%d",arr2);
	return 0;
}
