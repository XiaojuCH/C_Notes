//NULL指针就是不指向哪的指针，定义指针是如果没决定指向哪可以
//先定义为NULL指针，防止野指针

#include<stdio.h>

int main()
{
    //int *p1;
    int *p2 = NULL ;

    //printf("%d\n",*p1);
    printf("%d\n",*p2);

    return 0;
}