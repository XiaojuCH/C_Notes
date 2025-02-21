//以下代码是小甲鱼写的 跟我本人完全没有关系
#include<stdio.h>

int main()
{
        char hasBF;

        printf("小花你有女朋友了吗？(Y/N)\n");
        scanf("%c",&hasBF);

        if(hasBF == 'Y') //这里记得用== 两个等于号！！
        {
            printf("那……祝福你们咯");
        
        }
        else
        {
            printf("那我们在一起吧\n");
        }

        return 0;
}