#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "I love Xiaoju"; //定义str字符串 

    printf("sizeof str = %d\n",sizeof(str)); //这个是尺寸，包含\n这个字符

    printf("strlen str = %u\n",strlen(str));//这个是字符长度，不包含\n这个


    return 0;
 }