//0. 请按要求恢复下边被无情抹掉的代码

#include<stdio.h>

int main()
{
    int a , b , c , t ;
    int *pa , *pb , *pc ;

    printf("请输入三个数:");
    scanf("%d%d%d",&a,&b,&c);

    pa = &a ;
    pb = &b ;
    pc = &c ;

    if(a > b)
    {
        t = *pa ;
        *pa = *pb ;
        *pb = t ;

    }
    if(a > c)
    {
        t = *pa ;
        *pa = *pc ;
        *pc = t ;
    }
    if(b > c)
    {
        t = *pb ;
        *pb = *pc ; 
        *pc = t ;

    }

    printf("%d <= %d <= %d\n",*pa , *pb , *pc );
    
    return 0;
}