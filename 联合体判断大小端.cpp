#include<stdio.h>
union S
{
	char a;
	int b;
}s;
int main()
{
	s.b=1;
	if(s.a==1)
	{
	printf("С��");	
	}
	else
	printf("���");
	return 0;		
} 
