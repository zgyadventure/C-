#include<stdio.h>
int main()
{
	int i;
	int arr[5]={1,2,3,4,5};
	int* p;
	//for(p=&arr[0];p<&arr[5];)
	//{
	//	*p++=0;
	//}
	for(p=&arr[5];p>&arr[0];)
	{
		*--p=0;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
	
}
