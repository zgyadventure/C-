#include<stdio.h>
#include<string.h>
void* my_memcpy(void* arr1,void* arr2,int sz)
{
	void* ret=arr1;
	while(sz--)
	{
	*(char*)arr1=*(char*)arr2;
	(char*)arr1++;
	(char*)arr2++;
	}
	return ret;
}
struct stu
{
	char arr[10];
	int a;
}s1;
int main()
{
	int arr1[10]={1,2,3,4};
	struct stu arr2[]={{"张三",20},{"李四",19 }};
	void* ret=my_memcpy(arr1,arr2,sizeof(arr2));
	printf("%s",(char*)ret);
	return 0;
}
