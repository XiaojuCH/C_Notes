#include<stdio.h>
#include<math.h>

int main()
{
       unsigned int result = pow(2,32) - 1 ; //pow��������2��32�η���ֱ����int�ᵼ�½����������,���Լ�unsigned

        printf("result = %u\n",result); //ע��������Ϊ���޷����������Բ�����%d��Ҫ��%u
        //֮���Բ���unsigned��worning����Ϊp6_1����˵��int��4���ֽڴ�С��
        //�͵�Ч��2��32�Σ�4*8��-1������Ϊp6_2����int���Դ�signed�ĵģ����Ի��Դ�һ��bit��ռ�ã����
        //ʵ���Ͼ�ֻʣ2��31�Σ�4*8-1��-1�� ���Խ���������

        return 0 ;
} 
