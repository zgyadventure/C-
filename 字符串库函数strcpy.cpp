#include <stdio.h>
#include<string.h>
int main()
{
	char arr1[]="瓜皮";
	char arr2[]="#########";
	strcpy(arr2,arr1);					//这里被覆盖的在前,\0也被拷贝进去	
	printf("%s\n",arr2);
	memset(arr2,'*',5);					//arr2是被覆盖内存，*是内容，5是覆盖长度(与strcpy的区别是可设置长度，内容，以及不包括\0) 
	printf("%s",arr2);
	return 0;
	
}
