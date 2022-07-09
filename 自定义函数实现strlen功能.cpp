#include<stdio.h>
int strlen_(char* n)
{
	int count=0;
	while(*n!='\0')
	{
		count++;
		n++;
	}
	return count;
}
int main()
{
	char arr[]="bit";
	int len=strlen_(arr);
	printf("%d",len);
	return 0;
}
