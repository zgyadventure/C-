#include<stdio.h>
int my_strlen(char* arr)
{
	int count;
	while(*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[]="abcdef";
	int ret=my_strlen(arr);
	printf("%d",ret);
	return 0;
}
