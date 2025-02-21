#include<stdio.h>
#include<math.h>

int main()
{
       unsigned int result = pow(2,32) - 1 ; //pow这里是求2的32次方，直接用int会导致结果出现问题,所以加unsigned

        printf("result = %u\n",result); //注意这里因为是无符号类型所以不能用%d而要用%u
        //之所以不加unsigned会worning是因为p6_1不是说了int是4个字节大小吗
        //就等效于2的32次（4*8）-1但是因为p6_2讲了int是自带signed的的，所以会自带一个bit的占用，因此
        //实际上就只剩2的31次（4*8-1）-1了 所以结果会出问题

        return 0 ;
} 
