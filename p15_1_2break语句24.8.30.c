#include<stdio.h>

int main()
{
        int i,j;

        for(i = 0 ;i < 10 ; i++)
        {
                for(j = 0 ; j < 10 ;j++)
                {
                    if(j == 3)
                    {
                        break;
                    }
                }
        }

        printf("i = %d , j = %d\n",i,j);

        return 0;
}
//说明一个break只能跳出一个循环