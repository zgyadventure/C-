#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abcddfggv";
	char arr2[]="zhang";
	strncpy(arr1,arr2,7);      //��ĺ��油0 
	printf("%s",arr1);
	return 0;
}
