#include<stdio.h>

int main()
{
    char str[128] ;

    printf("请输入小狙的全名: ");
    scanf("%s", str);

    //printf("小狙的全名是: %s\n",str);

    printf("str 的地址是 :%p\n",str);
    printf("str 的地址是 :%p\n",&str[0]);
    //说明数组名就是数组第一个元素的地址

    return 0;
} 