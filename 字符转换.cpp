#include<stdio.h>
#include<ctype.h>
int main()
{
	int i=0;
	char arr[]="I AM YOUR FATHER";
	while(arr[i])
	{
		arr[i]=tolower(arr[i]);
		i++;
	}	
	printf("%s",arr);
	return 0;
}
