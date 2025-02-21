#include <stdio.h>

int main()
{
        int a;

        for(a = 0; a < 10 ; a++) //三个分号前面的内容分别是 初始化计数器；循环条件；更新计数器
        {
                printf("%d\n",a);
        }

        return 0;
}