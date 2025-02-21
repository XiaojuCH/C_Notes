#include <stdio.h>

int main()
{
        int count = 0;

        printf("随便打点英文字，我将给你表演魔术:\n");

        while(getchar()!= '\n')//当输入的不是回车时
        {
                count = count + 1;
        }

        printf("被我发现了!你一共打了%d个字符\n",count);

        return 0;
}
//怎么说这里也跟老师写的一样！！！