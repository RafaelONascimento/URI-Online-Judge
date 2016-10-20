#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n, j, i, lI, lM;
 
    while(scanf("%d",&n) != EOF)
    {
        int matriz[n][n];
 
        lI = (n/3);
        lM = (n/2);
 
 
        for(i = 0;i < n;i++)
        {
            for(j = 0; j < n; j++)
            {
                matriz[i][j] = 0;
            }
        }
 
        for(i = 0; i < n;i++)
        {
            matriz[i][i] = 2;
            matriz[i][(n-1)-i] = 3;
        }
 
        for(i = lI;i < (n-lI); i++)
        {
            for(j = lI; j < (n-lI); j++)
            {
                matriz[i][j] = 1;
            }
        }   
 
        matriz[lM][lM] = 4;
 
        for(i = 0;i < n;i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("%d",matriz[i][j]);
            }
            printf("\n");
        }           
        printf("\n");
    }
 
    return 0;
}
