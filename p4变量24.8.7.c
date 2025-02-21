#include <stdio.h>

int main()
{
        int a;
        char b;
        float c; 
        double d;

        a = 520 ;
        b = 'F' ;
        c = 13.14 ;
        d = 1.31452000000000 ;

        printf("小狙%i\n", a);
        printf("%cUCK U \n",b);
        printf("小狙对你%.2f\n",c);
        printf("我要跟小狙说%16.14f",d);
      
        return 0;
}