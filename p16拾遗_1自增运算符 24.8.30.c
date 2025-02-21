 #include<stdio.h>

 int main()
 {
        int i = 5,j;

        j = ++i;
        printf("i = %d,j = %d\n",i,j);
        //这里输出i=6,j=5

        i = 5;
        j = i++;
        printf("i = %d,j = %d\n",i,j);
       //这里输出i=6,j=6
        return 0;
 }
 //i++自增后返回改变前的值，++i先自增后返回改变后的值