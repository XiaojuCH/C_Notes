#include<stdio.h>

int main()
{
        char height;//要想运行正确的话这里char前面要加上unsigned才行！确保值是正的，这里就先不加上了（笑）

        height = 172;

        printf("小狙的身高是%d厘米！\n",height);

        return 0;
}

//这里编译出来的结果居然是-84厘米？？小狙居然长到地里去了！！！
//原因是char的signed和unsigned是系统决定的，所以可以会出现一些奇奇怪怪的取值范围，一定要小心