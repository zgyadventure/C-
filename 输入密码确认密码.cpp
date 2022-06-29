#include <stdio.h>
int main()
{
	char password[10]={0};
	printf("输入密码:");
	scanf("%s",password);
	printf("密码二次确认\n");
	while (int ch=getchar()!='\n');
	{                                   			//这里用循环不断读取密码以外的部分直到'\n'，防止第二次确认密码直接读取回车 导致任务失败. 
		;						//scanf以空格，制表符，换行符等为结束标志，所以有时需要用到getchar接受这些字符.
	}
	int password_2=getchar();
	if(password_2=='y')
	  printf("二次确认正确");
	else
	  printf("二次确认错误");
	  return 0;
	 
	
	
} 
