#include<stdio.h>

int main()
{
    int num = 1024 ;
    int *pi = &num ;
    char *ps = "Xiaoju";
    void *pv;

    pv = pi ;
    printf("pi : %p , pv : %p\n",pi , pv);

    pv = ps ;

    printf("ps : %p , pv : %p\n",ps , pv);

    //voidָ�����ͨ��ָ�룬����ָ���������͵����ݣ�

    return 0;
}