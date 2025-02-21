#include<stdio.h>

#define NUM 10 //将NUM宏定义为常量10
int main()
{
        int s[NUM];
        int i , sum = 0;

        for(i = 0; i < 10 ; i++) //for跟数组是好基友
        {
            printf("请输入第%i位同学的成绩:",i + 1);
            scanf("%d",&s[i]);
            sum += s[i]; //sum = sum + s[i]
        }

        printf("考试的平均分是:%.2f\n",(double)sum / NUM);

        return 0;
}