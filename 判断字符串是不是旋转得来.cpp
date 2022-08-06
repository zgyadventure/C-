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
int test(char arr1[],char arr2[])
{
	int i;
	int len=strlen(arr1);
	for(i=0;i<6;i++)
	{
		tip(arr1,1,len-1);
		tip(arr1,0,len-1);
		if(strcmp(arr1,arr2)==0)
			{
				return 1;
			}
	}
		return 0;
}
int main()
{
	char arr1[]="abcdef";
	char arr2[]="cdefab";
	int ret=test(arr1,arr2);
	if(ret==1)
	{
		printf("yes");
	}
	else
		printf("no");
	return 0;
}
