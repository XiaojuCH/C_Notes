#include<stdio.h>

int main()
{
        int i;
        printf("请问满分100你为我的帅气打多少分：\n");
        scanf("%d",&i);

        if(i >= 90 && i <= 100)
        {
            printf("很好，我给你打A评价！\n");
        }

        else if( i>=80 && i < 90)
        {
            printf("好，我给你打B评价\n");
        }

        else if(i>=70 && i < 80)
        {
            printf("行，我给你打C评价\n");
        }

        else if(i>=60 && i < 70)
        {
            printf("彳亍，我只能给你一个D\n");
        }

        else
        {
            printf("你是在乱来吗？\n");
        }
        return 0;
}