#include <stdio.h>
int main(){
	int ch;
	while ((ch=getchar())!=EOF)                 //getchar����ѭ��while��ͷ��������ǲ�ͬ����������潫�������ѭ��. 
	{											//������Ҫ����ctrl+z����������,��ctrl+z=EOF 
		putchar(ch);                                  
	}
	
	 return 0;
}
