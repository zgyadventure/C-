#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abc";
	int right=strlen(arr)-1;				//strlen查询数组字符串长度，通过\0为结束标准这一特点实现 
	printf("%d",right);
	return 0;
}
