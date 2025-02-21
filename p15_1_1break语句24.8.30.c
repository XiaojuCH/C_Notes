#include <stdio.h>

int main()
{
        long  a;
        long  num;
        _Bool flag = 1;
        printf("输入一个整数欧内该：\n");
        scanf("%ld",&num);

        for(a = 2;a < num / 2;a++)
        {
                    if(num % a == 0)
                    {
                                flag = 0;
                                break;//就不用一直if下去了
                    }


        }

        if(flag)
        {
            printf("搜得死内，我觉得%ld是一个素数的说\n",num);
        }
        else
        {
            printf("哟西，我认为%ld不是一个素数的说\n",num);
        }

        return 0;
}