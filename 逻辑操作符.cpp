#include <stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c=2;
	int d=3;
	int i;
	i=a++ && ++b && c++ && d++;       //a++Ϊ0�Ѿ������ж�iΪ0��ֻ��a++ 
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	return 0;
}
