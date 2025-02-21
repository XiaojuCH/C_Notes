//说while是先判断后循环，dowhile是先循环了再判断
//这个可以用在用户输入密码的时候上

#include<stdio.h>

int main()
{
        int i ;
        printf("请输入野兽先辈的名言(数字版):");
        do
        {
            scanf("%d",&i);
            printf("不对!这么小声还想开军舰?\n");
        } while(i != 114514);

        printf("哟西，你跟我进♂屋!");

        return 0;
}
//这里小甲鱼视频戛然而止了 导致我确实不是很会用这东西。。。