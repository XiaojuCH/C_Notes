#include <stdio.h>

int main()
{
        char a = 70, b = 105, c = 115 , d = 104 , e = 67; //输入数字却打印出字符是因为这里char声明
                                                          //为字符变量，输入的是ASCⅡ的数值
                                                          //所以只要输出指定%c那它就会自动找ASCⅡ字符表

        printf("%c%c%c%c%c\n",a,b,c,d,e);

        return 0;
}