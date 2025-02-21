#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Xiaoju";
    char str2[] = "Xiaoju";

    if(!strcmp(str1,str2)) //从头开始比较str1和str2,!是因为一样的话会返回0 但if要1才运行
    {
            printf("两个字符串完全一致");
    }
    else
    {
            printf("两个字符串存在差异");
    }

    return 0;
}