/*将以下用while改写
#include<stdio.h>

int main()
{
    inti;

    for(i = 0;i < 100;i++)
    {
        if(i % 2)
        {
            continue;
        }
    }
    return 0;
}*/

#include<stdio.h>

int main()
{
    int i=0;

    while(i < 100)
    {
        i++;
        if(i % 2)
        {
            continue;//所以continue放在while会有点问题吗
        }
    }
 
    return 0;
}
