#include <stdio.h>
union S
{
	char a;
	int b;                          //char与int共用内存，使用时间不同 
}s;
int main()
{
	printf("%d",sizeof(s));
	return 0;
}
