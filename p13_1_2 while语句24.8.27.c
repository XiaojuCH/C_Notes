#include <stdio.h>

int main()
{
        int count = 0;

        printf("�����Ӣ���֣��ҽ��������ħ��:\n");

        while(getchar()!= '\n')//������Ĳ��ǻس�ʱ
        {
                count = count + 1;
        }

        printf("���ҷ�����!��һ������%d���ַ�\n",count);

        return 0;
}
//��ô˵����Ҳ����ʦд��һ��������