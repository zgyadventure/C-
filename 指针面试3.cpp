#include<stdio.h>
#include<string.h>
int main()
{
	char* p="abcdef";
	printf("%d\n",sizeof(p));
	printf("%d\n",sizeof(p+1));
	printf("%d\n",sizeof(*p));
	printf("%d\n",sizeof(p[0]));//p[0]==*(p+0)，所以常量字符串有时也可用数组的一些方法 
	printf("%d\n",sizeof(&p));
	printf("%d\n",sizeof(&p+1));
	printf("%d\n\n",sizeof(&p[0]+1));
	printf("%d\n",strlen(p));
	printf("%d\n",strlen(p+1));
	//printf("%d\n",strlen(*p));
	//printf("%d\n",strlen(p[0]));
	printf("%d\n",strlen((const char*)&p));
	return 0;
	
}
