#include <stdio.h>

int main()
{
        int a;
        int num;
        _Bool flag = 1; //˵�ǲ������ͣ���ȷʵû��ô������������0����Ӧ��Ҳû���⣩

        printf("����һ������ŷ�ڸã�\n");
        scanf("%d",&num);

        for(a = 2;a < num / 2;a++)
        {
                    if(num % a == 0) //���˸���������������%��������㷨��......
                    {
                                flag = 0;
                    }


        }

        if(flag) //�������ж�flag���棨1�����Ǽ٣�0��
        {
            printf("�ѵ����ڣ��Ҿ���%d��һ��������˵\n",num);
        }
        else
        {
            printf("Ӵ��������Ϊ%d����һ��������˵\n",num);
        }

        return 0;
}