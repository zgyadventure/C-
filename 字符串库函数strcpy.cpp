#include <stdio.h>
#include<string.h>
int main()
{
	char arr1[]="瓜皮";
	char arr2[]="#########";
	strcpy(arr2,arr1);					//这里被覆盖的在前		
	printf("%s",arr2);
	return 0;
	
}
