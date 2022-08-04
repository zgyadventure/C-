#include<stdio.h>
//void test(int arr[10])
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]%2==0)
//		{
//			printf("%d",arr[i]);
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]%2!=0)
//		{
//			printf("%d",arr[i]);
//		}
//	}
//}
void test(int arr[10])
{
	int i;
	int left=0;
	int right=9;
	while(left<right)
	{
		while(left<right && arr[left]%2==1)
		{
			left++;
		}
		while(left<right && arr[right]%2==0)
		{
			right--;
		}
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
	}
}
int main()
{
	int arr[10];
	int i;
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	test(arr);
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
