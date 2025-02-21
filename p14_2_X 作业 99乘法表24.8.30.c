#include<stdio.h>

int main()
{
        int i ;
        int a ;
        
        for(i = 1;i < 10 ;i++)
        {
            for(a = 1;a <= i ;a++)
            {
                    printf("%d*%d=%d\n",i,a,i*a);
            }
            putchar('\n');//这里putchar是放一个回车的意思
        }

        return 0;
}
//拿下！全程靠自己脑子打出来的
//非常的聪明
