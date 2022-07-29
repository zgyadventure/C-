#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4};
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr+0));
	printf("%d\n",sizeof(&arr));
	printf("%d\n",sizeof(&arr+1));
	printf("%d\n",sizeof(arr[0]));
}
