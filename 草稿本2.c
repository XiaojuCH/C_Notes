#include<stdio.h>
union data{ int i;char ch;float f;}a={1};


int main()
{
    int n ,gameover = 0;;
    char mines[11][11] , sweeped[11][11] ;
    int result[11][11] = {0};
    scanf("%d\n",&n);
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%c",&mines[i][j]);
        }
        getchar();
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%c",&sweeped[i][j]);
            if(sweeped[i][j] == 'x' && mines[i][j] == '*')
            {
                gameover = 1;
            }
        }
        getchar();
    }

    if(gameover == 1)
    {
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(mines[i][j] == '*')
                {
                    printf("*");
                }
                else if(sweeped[i][j] == 'x')
                {
                    if(j+1<n &&mines[i][j+1] == '*')result[i][j]++;
                    if(j-1>=0 &&mines[i][j-1] == '*')result[i][j]++;
                    if(i+1<n &&mines[i+1][j] == '*')result[i][j]++;
                    if(i-1>=0 &&mines[i-1][j] == '*')result[i][j]++;
                    if(i+1<n&&j+1<n&&mines[i+1][j+1] == '*')result[i][j]++;
                    if(i-1>=0&&j-1>=0&&mines[i-1][j-1] == '*')result[i][j]++;
                    if(i+1<n&&j-1>=0&&mines[i+1][j-1] == '*')result[i][j]++;
                    if(i-1>=0&&j+1<n&&mines[i-1][j+1] == '*')result[i][j]++;
                    printf("%d",result[i][j]);
                }
                else
                {
                    printf("%c",sweeped[i][j]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(sweeped[i][j] == 'x')
                {
                    if(j+1<n &&mines[i][j+1] == '*')result[i][j]++;
                    if(i+1<n &&mines[i+1][j] == '*')result[i][j]++;
                    if(j-1>=0&&mines[i][j-1] == '*')result[i][j]++;
                    if(i-1>=0&&mines[i-1][j] == '*')result[i][j]++;
                    if(i+1<n&&j+1<n&&mines[i+1][j+1] == '*')result[i][j]++;
                    if(i-1>=0&&j-1>=0&&mines[i-1][j-1] == '*')result[i][j]++;
                    if(i+1<n&&j-1>=0&&mines[i+1][j-1] == '*')result[i][j]++;
                    if(i-1>=0&&j+1<n&&mines[i-1][j+1] == '*')result[i][j]++;
                    printf("%d",result[i][j]);
                }
                else
                {
                    printf("%c",sweeped[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}