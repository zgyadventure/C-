#include <stdio.h>
#include<string.h>
int main()
{
	char arr1[]="��Ƥ";
	char arr2[]="#########";
	strcpy(arr2,arr1);					//���ﱻ���ǵ���ǰ		
	printf("%s",arr2);
	return 0;
	
}
