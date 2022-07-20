#include<stdio.h>
int my_strlen(char* arr)
{
	int count=0;
	while(*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
void test(char* arr)
{
	int len=my_strlen(arr);
	int tmp=arr[0];
	arr[0]=arr[len-1];
	arr[len-1]='\0';
	if(my_strlen(arr+1)>=2)
		{
			test(arr+1);
		}
	arr[len-1]=tmp;
	
}
int main()
{
	char arr[]="adssdf";
	test(arr);
	printf("%s",arr);
	return 0;
}
