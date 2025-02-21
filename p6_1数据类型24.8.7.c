#include <stdio.h>

int main()
{
        int i;
        char j;
        float k;

        i = 520;  //大概是因为这段在int main里边所以要加分号吧,刚刚p5那里的在这外面所以不用加分号？
        j = 'C';
        k = 13.14;

        printf("size of int is %d\n",sizeof(int));
        printf("size of i is %d\n",sizeof(i));
        printf("size of char is %d\n",sizeof(char));
        printf("size of j is %d\n",sizeof j);  //此处sizeof后面如果是对象的话可以不加括号滴
        printf("size of float is %d\n",sizeof(float));
        printf("size of k is %i\n",sizeof(k));

        return 0;
}