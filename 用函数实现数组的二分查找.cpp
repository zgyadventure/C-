#include<stdio.h>
int seek(int arr[],int n)
{
	int right=9;
	int left=0;
	while(left<=right)                              //ע��������Ϊʵ��ʱ���뺯������arr��Ԫ�صĵ�ַ������sizeof�������±꣬right=1 
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
		printf("�ҵ���,�±���%d",ret);
	}
	else
	{
		printf("�Ҳ���");
	}
	return 0;
}
