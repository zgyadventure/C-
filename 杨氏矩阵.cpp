#include<stdio.h>
int test(int arr[3][3],int n,int* x,int* y)
{
	int row=0;
	int col=*y-1;
	while(row<=2 && col>=0)
	{
		if(arr[row][col]>n)
		{
			col--;
		}
		else if(arr[row][col]<n)
		{
			row++;
		}
		else
		{
			*x=row;
			*y=col;
			return 1;
		}
	}
}
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int k;
	int x=3;
	int y=3; 
	scanf("%d",&k);
	int ret=test(arr,k,&x,&y);
	if(ret==1)
	{
		printf("能找到");
		printf("下标是:%d %d",x,y);
	}
	else
		printf("找不到");
	return 0;
}
