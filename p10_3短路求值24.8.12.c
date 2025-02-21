#include<stdio.h>

int main()
{
        int a = 3 , b = 3 ;

        (a = 0 ) && ( b = 5);
        printf("a = %d,b = %d\n",a,b);
        
        (a = 1) || (b = 5);
        printf("a = %d, b = %d\n",a,b);

        return 0;
}
//就算是C会偷懒，如果前面的结果已经满足运算符的运算了，它就不会再执行后面的了
//所以只有a赋值了而b没有复制'o'