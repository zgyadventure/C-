#include <stdio.h>
int main()
{
	int i;
	int k=7;
	int arr[]={1,2,3,4,5,6,7,8,9};
	for(i=0;i<=8;i++)
	{
		if(arr[i]==7)
		{
			printf("ok下标为%d\n",i);
			break;
		}
	}
	if(i>8)
		printf("no,找不到");
	return 0;
	
}
