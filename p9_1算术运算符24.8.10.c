#include<stdio.h>
#include<math.h>
int main()
{
        int a, b, c;

        a = 1 + 2;

        b = 1 + 2 * 3 ;

        c = a + b + -1 + pow(2, 3);

        printf("a = %d\n",a);
        printf("b = %d\n",b);
        printf("c = %d\n",c);

        return 0;
}
// 1 + 2.0 == 1.0 + 2.0 反正会往更精准的方向计算