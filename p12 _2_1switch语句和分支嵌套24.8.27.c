//��Ϊ���Լ�д�İ汾

#include <stdio.h>

int main()
{
        int a , b;

        printf("������һ����ϲ�������֣�\n");
        scanf("%d",&a);

        printf("��������һ����ϲ�������֣�\n");
        scanf("%d",&b);

        if(a != b)
        {
            if(a > b)
            {
                printf("����Ȼ%d > %d\n",a,b);
            }

            else
            {
                printf("����Ȼ%d < %d\n",a,b);
            }
        }

        else
        {
            printf("����Ȼ%d = %d\n",a,b);
        }

        return 0;
}