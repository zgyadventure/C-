#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcdefg";
	char arr2[]="abcd";
	if(strstr(arr1,arr2)==NULL)                    //找到对应字符串返回该字符串首元素地址 
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
}
