#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    float i, ja = 0, j = 7;
    int ia = 0 , jb = 0;
 
    for(i = 0; i < 2.2; i = (i+0.2))
    {
 
        for(j = 1; j <= 3;j++)
        {
            ja = (j+i);
            if(i == 0 || i ==1|| i > 1.81)
            {
                ia = i;
                jb = ja;
                printf("I=%d J=%d\n",ia,jb);
            }
            else
            {
                printf("I=%.1f J=%.1f\n",i,ja);
            }
             
        }
    }
}
