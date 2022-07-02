#include <stdio.h>
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);		//计算元素个数 
	int left=0;
	int right=sz-1;
	int mid;
	int k=7;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>k)
		{
			right=mid-1;
		}
		else if(arr[mid]<k)
		{
			left=mid+1;
		}
		else
		    {
			printf("找到了它的下标为%d",mid);
			break;									//break放在括号外会在第一次就跳出循环，这个大括号必不可少 
	        }
		    
	}
	if(left>right)
	{
		printf("找不到");						//数组里无元素 
	}
	return 0; 
	
}
