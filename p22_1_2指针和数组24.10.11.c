#include<stdio.h>

int main()
{
    char str[128] ;

    printf("������С�ѵ�ȫ��: ");
    scanf("%s", str);

    //printf("С�ѵ�ȫ����: %s\n",str);

    printf("str �ĵ�ַ�� :%p\n",str);
    printf("str �ĵ�ַ�� :%p\n",&str[0]);
    //˵�����������������һ��Ԫ�صĵ�ַ

    return 0;
} 