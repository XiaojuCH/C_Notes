#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "I love";
    char str2[] = "Xiaoju";

    //strcat就是把两个字符串连接起来
    strcat(str1,""); //因为love和Xiaoju中间有个空格，所以这里加一个
    strcat(str1,str2);//这两行的意思是连接两次，第一次连接一个空格，第二次连接str2
    
    printf("str1:%s\n",str1);

    return 0;
}