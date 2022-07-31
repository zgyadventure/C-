#include<stdio.h>
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p的值为0x100000，如下表达式的之分别为多少？   0000 0000 0000 0000 0001 0000 0000 0000 0000 0000
//已知，结构体Test类型的变量大小是20个字节。 
int main()
{
	p=(struct Test*)0x100000;
	printf("%p\n",p+0x1);                    //0000 0000 0000 0000 0001 0000 0000 0000 0000 0000+0001=0000 0000 0000 0000 0001 0000 0000 0000 0000 0001
	//printf("%p\n",(unsigned long)p+0x1); 
	printf("%p\n",(unsigned int*)p+0x1);
	return 0; 
}
