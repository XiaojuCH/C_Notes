#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "I love Xiaoju" ;
    //*str��str[]��������Ϊһ���ַ����ı���
    //*str��str[0]����ʾ�ַ����ĵ�һ���ַ�
    int i , length ;

    length = strlen(str);

    for(i = 0 ; i < length ; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0 ;
}