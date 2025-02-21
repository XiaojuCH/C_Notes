#include <stdio.h>

int main()
{
        short i;
        unsigned short j;  //因为unsigned是声明无符号 signed声明有符号（可省略）就是说signed可以是+或-的
                           //而unsigned只能是正数或0
                            
        i = -1;            //我发现等于号左右两边的空格其实不加也没关系= = ，但是为了美观还是加上吧
        j = -1;            //所以此处给j硬♂插上了一个负号是不对滴，因此运行后会坏掉（雾）

        printf("%d\n",i);
        printf("%u\n",j);

        return 0;

}