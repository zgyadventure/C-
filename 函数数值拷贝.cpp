#include<stdio.h>
#include<assert.h>
void test(char* arr1,const char*arr2)//const优化 
{
	assert(arr1!=NULL);//断言优化 ,判断是否是空指针 
	assert(arr2!=NULL);
	while(*arr1++=*arr2++)
	{
		;
	}
	
}
int main()
{
	char arr1[]="##########";
	char arr2[]="bit";
	test(arr1,arr2);
	printf("%s",arr1);
	return 0;
}
