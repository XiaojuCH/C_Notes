#include<stdio.h>

int main()
{
        int i;
        printf("��������100��Ϊ�ҵ�˧������ٷ֣�\n");
        scanf("%d",&i);

        if(i >= 90 && i <= 100)
        {
            printf("�ܺã��Ҹ����A���ۣ�\n");
        }

        else if( i>=80 && i < 90)
        {
            printf("�ã��Ҹ����B����\n");
        }

        else if(i>=70 && i < 80)
        {
            printf("�У��Ҹ����C����\n");
        }

        else if(i>=60 && i < 70)
        {
            printf("��ء����ֻ�ܸ���һ��D\n");
        }

        else
        {
            printf("������������\n");
        }
        return 0;
}