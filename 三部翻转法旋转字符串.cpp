#include<stdio.h>
#include<string.h>
void tip(char arr[],int a,int n)
{
	int left=a;
	int right=n;
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
void test(char arr[])
{
	int n; 
	scanf("%d",&n);
	int len=strlen(arr);
	printf("%d\n",len);
	tip(arr,0,n-1);//逆序前n个 
	tip(arr,n,len-1);//逆序后面 
	tip(arr,0,len-1);//逆序全部 
}
int main()
{
	char arr[]="abcdef";
	test(arr);
	printf("%s",arr);
	return 0;
}
