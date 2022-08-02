#include<stdio.h>
int main()
{
	const char* a[]={"work","at","alibaba"};
	const char**pa=a;                   //pa是二级指针变量存"w"地址的地址 
	pa++;                         //指向"a"的一级指针 
   	printf("%s\n",*pa);
	return 0;
}
