//这里到字符串了
#include <stdio.h>

int main()
{
        char name[7];

        name[0] = 'X';  //记得从0开始数
        name[1] = 'i';
        name[2] = 'a';
        name[3] = 'o';
        name[4] = 'j';
        name[5] = 'u';
        name[6] = '\0'; //这里为什么多加一个\0是因为不加的话会出现乱码，它不知道name读取到哪里才停下
                        //所以得告诉它一下


//额其实此处也可以写成
//char name[7] = {'X','i','a','o','j','u'，'\0'}; 主要是我打完了视频ppt就翻页了（笑）
        printf("%s\n",name); //字符用%d 字符串用%s

        return 0;
}
