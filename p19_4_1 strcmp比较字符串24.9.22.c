#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Xiaoju";
    char str2[] = "Xiaoju";

    if(!strcmp(str1,str2)) //��ͷ��ʼ�Ƚ�str1��str2,!����Ϊһ���Ļ��᷵��0 ��ifҪ1������
    {
            printf("�����ַ�����ȫһ��");
    }
    else
    {
            printf("�����ַ������ڲ���");
    }

    return 0;
}