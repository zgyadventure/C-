#include <stdio.h>
int main()
{
	int arr[]={8,7,6,5,4,3,2,1};
	int i;
	int j;
	int n;
	int tmp;
	for(i=0;i<7;i++)
	{
		int count=1;                          //������count�Ż����룬�����м�ĳ���������(��Ƕ��ѭ����δ����ֵ)�����Լ�����ɹ�������Ҫ���к���ð�� 
		for(j=0;j<7-i;j++)					
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				count=0;
			}
		}
		if(count==1)
		{
			break;
		}
	}
	for(n=0;n<8;n++)
	{
		printf("%d",arr[n]);
	}
	return 0;
}
