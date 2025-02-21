#include <stdio.h>

int main()
{
        int a;
        int num;
        _Bool flag = 1; //说是布尔类型（我确实没怎么听懂，反正用0代替应该也没问题）

        printf("输入一个整数欧内该：\n");
        scanf("%d",&num);

        for(a = 2;a < num / 2;a++)
        {
                    if(num % a == 0) //喵了个咪的想半天忘记有%余数这个算法了......
                    {
                                flag = 0;
                    }


        }

        if(flag) //这里是判断flag是真（1）还是假（0）
        {
            printf("搜得死内，我觉得%d是一个素数的说\n",num);
        }
        else
        {
            printf("哟西，我认为%d不是一个素数的说\n",num);
        }

        return 0;
}