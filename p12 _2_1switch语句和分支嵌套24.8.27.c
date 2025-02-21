//此为我自己写的版本

#include <stdio.h>

int main()
{
        int a , b;

        printf("请输入一个你喜欢的数字：\n");
        scanf("%d",&a);

        printf("请再输入一个你喜欢的数字：\n");
        scanf("%d",&b);

        if(a != b)
        {
            if(a > b)
            {
                printf("很显然%d > %d\n",a,b);
            }

            else
            {
                printf("很显然%d < %d\n",a,b);
            }
        }

        else
        {
            printf("很显然%d = %d\n",a,b);
        }

        return 0;
}