#include<stdio.h>

int main()
{
        int a , b , c;
        a = (b = 3,(c = b + 4) + 5);
        printf("%d\n",a);
        return 0;
}


//逗号运算符的优先级是最低的 
//反正逗号运算符里边都是从左往右运算,
//比如这里就是 先算b = 3 再算的c = b + 4 再算的 + 5