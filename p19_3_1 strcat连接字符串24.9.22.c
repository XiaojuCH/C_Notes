#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "I love";
    char str2[] = "Xiaoju";

    //strcat���ǰ������ַ�����������
    strcat(str1,""); //��Ϊlove��Xiaoju�м��и��ո����������һ��
    strcat(str1,str2);//�����е���˼���������Σ���һ������һ���ո񣬵ڶ�������str2
    
    printf("str1:%s\n",str1);

    return 0;
}