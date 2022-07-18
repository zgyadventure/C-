#include<stdio.h>
void nit(int arr[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		arr[i]=0;
	}
}
void print(int arr[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
}
void reverce(int arr[10])
{
	int i;
	int left=0;
	int right=9;
	while(left<right)
	{
		i=arr[left];
		arr[left]=arr[right];
		arr[right]=i;
		left++;
		right--;
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	reverce(arr);
	print(arr);
	nit(arr);
	return 0;
	
	
}
