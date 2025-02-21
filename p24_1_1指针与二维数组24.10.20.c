#include<stdio.h>

int main()
{
    int array[4][5] = {0} ;

    printf("sizeof int : %d\n",sizeof(int));
    printf("array:  %p\n",array);//array就是数组的首地址 应该就是array[0][0]
    printf("array + 1:  %p\n",array + 1);//array + 1 就是array[1][0]了
    //因为二维数组就是靠一维数组的线性排列来的
    //发现跨度是20 正好是5个int 就是5个元素
    //所以array就是指向5个元素的数组的指针



// *(array + i ) == array[i]
// *(*(array + i ) + j) == array[i][j]
// *(*(*(array + i ) + j) + k ) == array[i][j][k]
   
   
   
    return 0;
}