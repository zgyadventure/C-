#include<stdio.h>
 
void print(char* name);
int main()
{
    char name[20] = {0};
    scanf("%s", name);//�����ַ���
    print(name);
    return 0;
}
void print(char* name)//�ߵ��������
{
    if (*name != '\0')// 
    {
        print(name + 1);
    }
    putchar(*name);//�ݹ����
}
