//continue���break���Ƿ�������������һ��ѭ���������¿�ʼ
#include<stdio.h>

int main()
{
        int ch;

        while ((ch = getchar() != '\n'))
        {
            if(ch =='C')
            {
                continue;//��˼���������ĸ�з��Ǵ���C������������
            }
            putchar(ch);
        }

        putchar('\n');
        return 0;
}