#include <stdio.h>

int main()
{
        long  a;
        long  num;
        _Bool flag = 1;
        printf("����һ������ŷ�ڸã�\n");
        scanf("%ld",&num);

        for(a = 2;a < num / 2;a++)
        {
                    if(num % a == 0)
                    {
                                flag = 0;
                                break;//�Ͳ���һֱif��ȥ��
                    }


        }

        if(flag)
        {
            printf("�ѵ����ڣ��Ҿ���%ld��һ��������˵\n",num);
        }
        else
        {
            printf("Ӵ��������Ϊ%ld����һ��������˵\n",num);
        }

        return 0;
}