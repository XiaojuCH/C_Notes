#include <stdio.h>

int main()
{
        short i;
        unsigned short j;  //��Ϊunsigned�������޷��� signed�����з��ţ���ʡ�ԣ�����˵signed������+��-��
                           //��unsignedֻ����������0
                            
        i = -1;            //�ҷ��ֵ��ں��������ߵĿո���ʵ����Ҳû��ϵ= = ������Ϊ�����ۻ��Ǽ��ϰ�
        j = -1;            //���Դ˴���jӲ�������һ�������ǲ��ԵΣ�������к�ỵ������

        printf("%d\n",i);
        printf("%u\n",j);

        return 0;

}