#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "I love Xiaoju" ;
    //*str和str[]都可以作为一个字符串的变量
    //*str和str[0]都表示字符串的第一个字符
    int i , length ;

    length = strlen(str);

    for(i = 0 ; i < length ; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0 ;
}