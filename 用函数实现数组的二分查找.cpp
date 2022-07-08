#include<stdio.h>
int seek(int arr[],int n)
{
	int right=9;
	int left=0;
	while(left<=right)                              //注意数组作为实参时传入函数的是arr首元素的地址，若用sizeof算数组下标，right=1 
	{
		int mid=(right+left)/2;
		if(arr[mid]>n)
		{
			right=mid-1;
		}
		else if(arr[mid]<n)
		{
			left=mid+1;
		}
		else
		{
			return mid;
		}
	if(left>right)
	{
		return 0;
	}
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int ret=seek(arr,k);
	if(ret!=0)
	{
		printf("找到了,下标是%d",ret);
	}
	else
	{
		printf("找不到");
	}
	return 0;
}
