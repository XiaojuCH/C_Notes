//这个是老师版（感觉跟我的差不了多少呢）
#include <stdio.h>

int main()
{
        int a , b;

        printf("请输入两个你喜欢的数:");
        scanf("%d %d",&a,&b);

        if(a!=b)
        {
            if (a > b)
            {
                    printf("%d > %d\n",a,b);
            }

            else
            {
                    printf("%d < %d\n",a,b); 
            }
        }

        else
        {
                printf("%d = %d\n",a,b);
        }
        return 0;
}