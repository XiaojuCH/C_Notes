#include<stdio.h>

#define NUM 10 //��NUM�궨��Ϊ����10
int main()
{
        int s[NUM];
        int i , sum = 0;

        for(i = 0; i < 10 ; i++) //for�������Ǻû���
        {
            printf("�������%iλͬѧ�ĳɼ�:",i + 1);
            scanf("%d",&s[i]);
            sum += s[i]; //sum = sum + s[i]
        }

        printf("���Ե�ƽ������:%.2f\n",(double)sum / NUM);

        return 0;
}