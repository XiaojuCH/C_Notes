 #include<stdio.h>

 int main()
 {
        int i = 5,j;

        j = ++i;
        printf("i = %d,j = %d\n",i,j);
        //�������i=6,j=5

        i = 5;
        j = i++;
        printf("i = %d,j = %d\n",i,j);
       //�������i=6,j=6
        return 0;
 }
 //i++�����󷵻ظı�ǰ��ֵ��++i�������󷵻ظı���ֵ