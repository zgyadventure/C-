#include<stdio.h>
#include<string.h>
void test(char arr[],int sz)
{
	int left=0;
	int right=sz-1;
	int i;
	while(right>left)
	{
		i=arr[left];
		arr[left]=arr[right];
		arr[right]=i;
		left++;
		right--;
	}
}
int main()
{
	char a[]="zhoujielun";
	int sz=strlen(a);
	test(a,sz);
	printf("%s",a);
	return 0;
}
