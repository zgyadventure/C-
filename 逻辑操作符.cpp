#include <stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c=2;
	int d=3;
	int i;
	i=a++ && ++b && c++ && d++;       //a++为0已经可以判断i为0，只算a++ 
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	return 0;
}
