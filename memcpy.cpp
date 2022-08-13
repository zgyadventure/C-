#include<stdio.h>
#include<string.h>
struct stu
{
	char arr[10];
	int a;
}s1;
int main()
{
	int arr1[10]={1,2,3,4};
	struct stu arr2[]={{"张三",20},{"李四",19 }};
	memcpy(arr1,arr2,sizeof(arr2));
	printf("%d",arr1[0]);
	return 0;
}
