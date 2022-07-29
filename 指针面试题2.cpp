#include<stdio.h>
#include<string.h>
int main()
{
	char arr[6]={'a','b','b','d','e','f'};
	printf("%d\n",strlen(arr));
	printf("%d\n",strlen(arr+0));
	//printf("%d",strlen(*arr));  strlen是找地址，然后向后面找'\0'，这里将'a'的ascii码值97作为地址往后找，会报错 
	//printf("%d",strlen(arr[0]));    同上报错 
	//printf("%d\n",strlen(&arr));理论上是随机值不知道为毛报错 
	//printf("%d",strlen(&arr+1));
	return 0;
}
