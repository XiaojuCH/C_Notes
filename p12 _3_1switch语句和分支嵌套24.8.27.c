//12_3_* ���ڽ�С���Ĺ��¹�������
#include <stdio.h>

int main()
{
        char isRain,isFree;

        printf("�Ƿ��пգ�(Y/N)");
        scanf("%c",&isFree);

        getchar();

        printf("�Ƿ����ꣿ(Y/N)");
        scanf("%c",&isRain);

        if(isFree == 'Y')
                if(isRain == 'Y')
                    printf("�ǵô���ɡ\n");

                else
                    printf("GOOD\n");
        else
        {
            printf("NO WAY TAT\n");
        }

        return 0;
}