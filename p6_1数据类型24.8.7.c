#include <stdio.h>

int main()
{
        int i;
        char j;
        float k;

        i = 520;  //�������Ϊ�����int main�������Ҫ�ӷֺŰ�,�ո�p5����������������Բ��üӷֺţ�
        j = 'C';
        k = 13.14;

        printf("size of int is %d\n",sizeof(int));
        printf("size of i is %d\n",sizeof(i));
        printf("size of char is %d\n",sizeof(char));
        printf("size of j is %d\n",sizeof j);  //�˴�sizeof��������Ƕ���Ļ����Բ������ŵ�
        printf("size of float is %d\n",sizeof(float));
        printf("size of k is %i\n",sizeof(k));

        return 0;
}