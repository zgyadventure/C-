#include<stdio.h>
void test(int (*p)[5],int x,int y)
{
	int i;
	int j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	test(arr,3,5);
	return 0;
}
