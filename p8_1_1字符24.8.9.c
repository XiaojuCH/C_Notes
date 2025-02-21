#include <stdio.h>

int main()
{
        char a = 'C';

        printf("%c = %d\n",a,a);//这里用%d输出的是"C"的整数形式，没报错但输出了67
                                //其中67是"C"在ASCⅡ的形式
                                
        return 0;
}