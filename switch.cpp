#include<stdio.h>
int main()
{
	int day;
	scanf("%d",&day);
	switch(day)
	{
	case 1:                                               //���ｫ1-5��6-7����һ�𣬲���ÿһ������break����ѭ�� 
	case 2:
	case 3:
	case 4:
	case 5:
	  printf("������");
	  break;
	case 6:
	case 7:
	  printf("��Ϣ��");
	  break;
	default:
	  printf("����");                                         //��switch��ϰ��ʹ��default��β��ͷ 
	  break;
	}
	return 0;
		
	
	
}
