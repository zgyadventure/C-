#include<stdio.h>
int main()
{
	const char* a[]={"work","at","alibaba"};
	const char**pa=a;                   //pa�Ƕ���ָ�������"w"��ַ�ĵ�ַ 
	pa++;                         //ָ��"a"��һ��ָ�� 
   	printf("%s\n",*pa);
	return 0;
}
