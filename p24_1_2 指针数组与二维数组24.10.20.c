#include<stdio.h>

int main()
{


    int array[2][3] = {{0,1,2},{3,4,5}};
    int (*p)[3] = array ;

    printf("**(p+1): %d\n",**(p+1));
    printf("**(array + 1): %d\n",**(array+1));
    printf("array[1][0]: %d\n",(array[1][0]));
    //会发现这三个的值都是一样的
    printf("*(*(p+1)+2): %d\n",*(*(p+1)+2));
    printf("*(*(array + 1)+2): %d\n",*(*(array + 1)+2));
    printf("array[1][2]: %d\n",(array[1][2]));
   


    return 0;
}