#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Original String";
    char str2[] = "New String";
    char str3[100] ;

    strcpy(str1,str2); //���ַ���str2������str1��
    strcpy(str3,"Copy Successful");
    //ʹ��strcpyһ��Ҫע��Ŀ������(str1)�ĳ���Ҫ���ɵ���ԭ����(str2)�ĳ���
    //p19_2_2��������ʾ

    printf("str1:%s\n",str1);
    printf("str2:%s\n",str2);
    printf("str3:%s\n",str3);

    return 0;
}