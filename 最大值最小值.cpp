#include<stdio.h>
int main()
{
	int arr[10]={3,2,5,4,6,7,8,3,10,11};
	int max=arr[0];
	int min=arr[0];
	int i;
	int j; 
	for(i=1;i<10;i++)
	{
		if(max<arr[i])
		{
			int a=arr[i];
			arr[i]=max;
			max=a;
		}
	}
	for(j=1;j<10;j++)
	{
		if(min>arr[j])
		{
			int b=arr[j];
			arr[j]=min;
			min=b;
		}
	}
	printf("%d\n",max);
	printf("%d\n",min);
}
