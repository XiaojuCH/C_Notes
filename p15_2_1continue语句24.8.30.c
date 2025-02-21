//continue相比break就是符合条件是跳过一次循环，并重新开始
#include<stdio.h>

int main()
{
        int ch;

        while ((ch = getchar() != '\n'))
        {
            if(ch =='C')
            {
                continue;//意思是输入的字母中凡是带有C都当作看不见
            }
            putchar(ch);
        }

        putchar('\n');
        return 0;
}