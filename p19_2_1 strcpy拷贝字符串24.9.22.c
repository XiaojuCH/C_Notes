#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Original String";
    char str2[] = "New String";
    char str3[100] ;

    strcpy(str1,str2); //把字符串str2拷贝到str1上
    strcpy(str3,"Copy Successful");
    //使用strcpy一定要注意目标数组(str1)的长度要容纳的下原数组(str2)的长度
    //p19_2_2将错误演示

    printf("str1:%s\n",str1);
    printf("str2:%s\n",str2);
    printf("str3:%s\n",str3);

    return 0;
}