#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[10]={};
	system("shutdown -s -t 60");
again:
	printf("请注意你的电脑将在一分中后关闭，输入我是猪取消关机\n");
	scanf("%s",arr);

	if(strcmp(arr,"我是猪")==0)
	{
		system("shutdown -a");
		printf("已取消关机");
	}
	else
	{
		goto again;
	}
	return 0;
}

