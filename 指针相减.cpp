#include<stdio.h>
int main()
{
	int arr[10]={0};
	printf("%d",&arr[9]-&arr[0]);  //为两地址间元素个数 
	return 0;
	
}
