#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int j;
	int tmp;
	int arr1[5]={1,2,3,5};
	int arr2[5]={1,2,6,7};
	for(i=0;i<5;i++)
	{
		tmp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=tmp;
		printf("%d",arr1[i]);
	}
	return 0;
	
	
}
