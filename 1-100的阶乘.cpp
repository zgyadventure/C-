#include <stdio.h>
int main()
{
	int i=0;
	int sum=1;
	int n;
	scanf("%d",&n);								//���n����ᳬ��2��32�η������Ϊ0��Ҳ����Ϊ��ֵ 
	for(i=2;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
}
