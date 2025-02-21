#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "To be or not to be";
    char str2[40];

    strncpy(str2,str1,5); //这里限制拷贝5个字符（不包括结束符\0）
    str2[5] = '\0' ; //所以这里要追加一个结束符

    printf("str2:%s\n",str2);

    return 0;
}