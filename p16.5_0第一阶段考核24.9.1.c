//题目：请编写程序，计算出 1000 以内（不包含 1000）的自然数中,属于 3 或 5 的倍数的数字之和
#include<stdio.h>

int main()
{
        int sum = 0;
        int i;

        for(i = 0; i < 1000 ; i++)
        {
            if((i % 3 && i % 5) == 0)
            {
                sum += i;
            }
        }

        printf("结果是%d\n",sum);

        return 0;
}
//答案是233168，正确
//30min拿下