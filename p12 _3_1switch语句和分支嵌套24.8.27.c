//12_3_* 是在讲小花的故事哈哈哈哈
#include <stdio.h>

int main()
{
        char isRain,isFree;

        printf("是否有空？(Y/N)");
        scanf("%c",&isFree);

        getchar();

        printf("是否下雨？(Y/N)");
        scanf("%c",&isRain);

        if(isFree == 'Y')
                if(isRain == 'Y')
                    printf("记得带上伞\n");

                else
                    printf("GOOD\n");
        else
        {
            printf("NO WAY TAT\n");
        }

        return 0;
}