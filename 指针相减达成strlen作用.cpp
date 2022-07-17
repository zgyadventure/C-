#include<stdio.h>
int strlen(char* arr)
{
	char* start=arr;
	char* end=arr;
	while(*end!='\0')
	{
		end++;
	}
	return end-start;
}
int main()
{
	char arr[10]="bit";
	int len=strlen(arr);
	printf("%d",len);
	return 0;
}
