#include<stdio.h>
int main()
{
	int i;
	int j;
	int arr[3][4]={{1,2,3},{5,6},7,8,9};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
	printf("\n");
	}
	return 0;
}
