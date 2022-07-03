#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[]="welcome to bit"; 
	char arr2[]="##############";
	int left=0;
	int right=strlen(arr1)-1;
	while(left<=right)
	{
	arr2[left]=arr1[left];
	arr2[right]=arr1[right];
	left++;
	right--;
	printf("%s\n",arr2);                               
	Sleep(1000);                                       //完成基本循环后这里可以用Sleep延迟打赢1s            
    system("cls");										//这里用清屏提高显示效果 
    }
    printf("%s",arr2);    								 
    return 0;
	
	
}
