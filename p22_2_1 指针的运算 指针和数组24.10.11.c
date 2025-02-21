#include<stdio.h>

int main()
{
    char a[] = "Xiaoju";
    int b[5] = {1,2,3,4,5};

    int *p = b ;

    printf("*p = %d, *(p+1) = %d , *(p+2) = %d\n",*p,*(p+1),*(p+2));

    // *(p+1)就是指针所在位置的下1个元素

    return 0;
} 