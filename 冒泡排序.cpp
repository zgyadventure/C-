#include <stdio.h>
int main()
{
	int arr[]={8,7,6,5,4,3,2,1};
	int i;
	int j;
	int n;
	int tmp;
	for(i=0;i<7;i++)
	{
		int count=1;                          //这里用count优化代码，假如中间某次完成排序(即嵌套循环中未交换值)，则以及排序成功，不需要进行后续冒泡 
		for(j=0;j<7-i;j++)					
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				count=0;
			}
		}
		if(count==1)
		{
			break;
		}
	}
	for(n=0;n<8;n++)
	{
		printf("%d",arr[n]);
	}
	return 0;
}
