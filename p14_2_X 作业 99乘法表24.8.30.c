#include<stdio.h>

int main()
{
        int i ;
        int a ;
        
        for(i = 1;i < 10 ;i++)
        {
            for(a = 1;a <= i ;a++)
            {
                    printf("%d*%d=%d\n",i,a,i*a);
            }
            putchar('\n');//����putchar�Ƿ�һ���س�����˼
        }

        return 0;
}
//���£�ȫ�̿��Լ����Ӵ������
//�ǳ��Ĵ���
