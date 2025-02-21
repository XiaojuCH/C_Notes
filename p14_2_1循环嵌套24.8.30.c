#include<stdio.h>

int main()
{
        int i, j;

        for (i = 0; i < 3 ;i++) //外层循环
        {
            for(j = 0;j < 3 ;j++) //内层循环
            {
                printf("i = %d,j = %d\n",i,j);
            }
        }

        return 0;
}
//输出结果说明当内层循环结束后外层循环才会继续执行