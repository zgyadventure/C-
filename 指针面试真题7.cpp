#include<stdio.h>
int main()
{
	const char* c[]={"ENTER","NEW","POINT","FIRST"};
	const char* *p[]={c+3,c+2,c+1,c};
	const char** *cpp=p;
	
	printf("%s\n",**++cpp);                   //����++�󣬺���cppֵ�ᱣ�� 
	printf("%s\n",*--*++cpp+3);               //ǰ�벿�ִ�������˳��ִ�У�����Ҫע��--�ǽ����ú�-1��c+1-1�õ�һ��ָ��c,ָ��ENTER��Ԫ����Ԫ�� 
	printf("%s\n",*cpp[-2]+3);                //*cpp[-2]=*(*(cpp-2))
	printf("%s\n",cpp[-1][-1]+1);             //cpp[-1][-1]=*(*(cpp-1)-1)
	return 0;
	
}
