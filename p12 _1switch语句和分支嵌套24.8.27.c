#include <stdio.h>

int main()
{
         char ch;

         printf("��������Լ���С������(�������д��ĸABCDE):");
         scanf("%c",&ch);

        switch (ch) //���ﲻ�ܼӷֺ�
        {
                case'E': printf("��Ĵ�С��90������\n"); break;//�ǵü�break
                case'D': printf("��Ĵ�С��80~90��֮��\n");break;
                case'C': printf("��Ĵ�С��70~80��֮��\n");break;
                case'B': printf("��Ĵ�С��60~70��֮��\n");break;
                case'A': printf("��Ĵ�С��60������\n");break;
                default: printf("�������䣬����\n");break; //default�൱��else�ɣ�
        }

        return 0;
}