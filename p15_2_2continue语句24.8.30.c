/*��������while��д
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
            continue;//����continue����while���е�������
        }
    }
 
    return 0;
}
