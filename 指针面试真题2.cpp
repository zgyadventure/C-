#include<stdio.h>
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p��ֵΪ0x100000�����±��ʽ��֮�ֱ�Ϊ���٣�   0000 0000 0000 0000 0001 0000 0000 0000 0000 0000
//��֪���ṹ��Test���͵ı�����С��20���ֽڡ� 
int main()
{
	p=(struct Test*)0x100000;
	printf("%p\n",p+0x1);                    //0000 0000 0000 0000 0001 0000 0000 0000 0000 0000+0001=0000 0000 0000 0000 0001 0000 0000 0000 0000 0001
	//printf("%p\n",(unsigned long)p+0x1); 
	printf("%p\n",(unsigned int*)p+0x1);
	return 0; 
}
