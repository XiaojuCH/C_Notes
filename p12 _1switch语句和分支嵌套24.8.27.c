#include <stdio.h>

int main()
{
         char ch;

         printf("请输入对自己大小的评级(请输入大写字母ABCDE):");
         scanf("%c",&ch);

        switch (ch) //这里不能加分号
        {
                case'E': printf("你的大小在90分以上\n"); break;//记得加break
                case'D': printf("你的大小在80~90分之间\n");break;
                case'C': printf("你的大小在70~80分之间\n");break;
                case'B': printf("你的大小在60~70分之间\n");break;
                case'A': printf("你的大小在60分以下\n");break;
                default: printf("你在乱输，对吗？\n");break; //default相当于else吧？
        }

        return 0;
}