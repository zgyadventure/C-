#include <stdio.h>
union S
{
	char a;
	int b;                          //char��int�����ڴ棬ʹ��ʱ�䲻ͬ 
}s;
int main()
{
	printf("%d",sizeof(s));
	return 0;
}
