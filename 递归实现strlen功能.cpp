#include<stdio.h>
int my_strlen(char* n)
{
	if(*n!='\0')
	{
		return 1+my_strlen(n+1);
	}
	else
	return 0;
}
int main()
{
	char arr[]="bit";
	int len=my_strlen(arr);
	printf("%d",len);
	return 0;
}
