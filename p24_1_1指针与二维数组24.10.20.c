#include<stdio.h>

int main()
{
    int array[4][5] = {0} ;

    printf("sizeof int : %d\n",sizeof(int));
    printf("array:  %p\n",array);//array����������׵�ַ Ӧ�þ���array[0][0]
    printf("array + 1:  %p\n",array + 1);//array + 1 ����array[1][0]��
    //��Ϊ��ά������ǿ�һά�����������������
    //���ֿ����20 ������5��int ����5��Ԫ��
    //����array����ָ��5��Ԫ�ص������ָ��



// *(array + i ) == array[i]
// *(*(array + i ) + j) == array[i][j]
// *(*(*(array + i ) + j) + k ) == array[i][j][k]
   
   
   
    return 0;
}