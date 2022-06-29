#include <stdio.h>
int main(){
	int ch;
	while ((ch=getchar())!=EOF)                 //getchar放在循环while里和放在外面是不同结果，在外面将变成无限循环. 
	{											//这里需要输入ctrl+z来结束程序,即ctrl+z=EOF 
		putchar(ch);                           //getchar和putchar最终导出的都是字符
	}                                              
	
	 return 0;
}
