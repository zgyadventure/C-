#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]={0};
	int i;
	for(i=0;i<3;i++)
	{
		printf("请输入密码:");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)                //嘿嘿，字符串是不可以用==来判断相等的，这里就要用到strcmp来判断两边是否相等 
		{												//左边大于右边为正，左边等于右边为0，左边小于右边为负
			printf("密码正确，登陆成功");
			break;
		}
	}
	if(i==3)
	{
		printf("三次密码输入均错误，登录失败");
	}
	return 0;
}
