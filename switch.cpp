#include<stdio.h>
int main()
{
	int day;
	scanf("%d",&day);
	switch(day)
	{
	case 1:                                               //这里将1-5，6-7放在一起，不用每一步都用break跳出循环 
	case 2:							//注意在case后面无break情况下，无论值对不对应都执行					
	case 3:
	case 4:
	case 5:
	  printf("工作日");
	  break;
	case 6:
	case 7:
	  printf("休息日");
	  break;
	default:
	  printf("错误");                                         //在switch中习惯使用default结尾或开头 
	  break;
	}
	return 0;
		
	
	
}
