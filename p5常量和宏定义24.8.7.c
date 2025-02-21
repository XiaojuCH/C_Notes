#include <stdio.h>

#define URL "pornhub.com"
#define NAME "学习网站"
#define BOSS "小狙"
#define YEAR 2024 //所以理论上这里2024可以加双引号变成字符串 那么下面的%i或者%d就得改成%s
#define MONTH 8
#define DAY 7

int main()
{
        printf("在%i年%d月%d日\n", YEAR,MONTH,DAY);
        printf("%s是%s最喜欢的……\n",NAME,BOSS);
        printf("%s的域名是%s\n",NAME,URL);

        return 0;
}