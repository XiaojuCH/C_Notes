#include <stdio.h>

int main()
{
        printf("整型输出：%d\n",1 + (int)0.8); //不加(int)的话输出会出错
                                              //且加了后运算是直接去掉小数点，而不会四舍五入
        printf("浮点型输出：%f\n",1 + 2.0);

        return 0;
}