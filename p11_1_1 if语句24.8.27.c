#include <stdio.h>

int main()
{
        int i;
        printf("你今年多大♂了:\n");
        scanf("%d",&i); //scanf说是接收用户输入的一个整形%d，然后&就是存到i里边
                        //因该类似python的input ?
        if (i >=18) //if的括号后边不用加 ; 
        {
            printf("非常好，我喜欢\n");
        }

        else 
            {
                printf("长大了再来！\n");
            }
                return 0;
} 