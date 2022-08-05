#include<stdio.h>
void test(char* arr,int sz)
{
	int n;
	int j; 
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int tmp=*arr;
		for(j=0;j<sz-1;j++)
		{
			*(arr+j)=*(arr+j+1);
		}
		*(arr+j-1)=tmp;
	}
}
int main()
{
	char arr[]="abcdef";
	int sz=sizeof(arr)/sizeof(arr[0]);
	test(arr,sz);
	printf("%s",arr);
	return 0;
}
