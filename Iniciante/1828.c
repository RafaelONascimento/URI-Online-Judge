#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char sheldon[10], raj[10], resposta[10];
   int n, i, result;
 
   scanf("%d",&n);
 
   for(i = 1; i <= n ; i++)
   {
      scanf("%s %s",sheldon,raj);
 
 
      if(strcmp(sheldon,raj) == 0)
      {
         printf("Caso #%d: De novo!\n",i);
      }
      else
      {
         if(strcmp(sheldon,"tesoura") == 0)
         {
            if(strcmp(raj,"Spock") == 0 || strcmp(raj,"pedra") == 0)
            {
              printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else
            {
               printf("Caso #%d: Bazinga!\n",i);
            }
         }
         else if(strcmp(sheldon,"lagarto") == 0)
         {
            if(strcmp(raj,"tesoura") == 0 || strcmp(raj,"pedra") == 0)
            {
              printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else
            {
               printf("Caso #%d: Bazinga!\n",i);
            }
         }
         else if(strcmp(sheldon,"papel") == 0)
         {
            if(strcmp(raj,"tesoura") == 0 || strcmp(raj,"lagarto") == 0)
            {
              printf("Caso #%d: Raj trapaceou!\n",i);
            } 
            else
            {
              printf("Caso #%d: Bazinga!\n",i);
            }
         }
         else if(strcmp(sheldon,"Spock") == 0)
         {
            if(strcmp(raj,"papel") == 0 || strcmp(raj,"lagarto") == 0)
            {
              printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else
            {
              printf("Caso #%d: Bazinga!\n",i);
            }
         }
         else if(strcmp(sheldon,"pedra") == 0)
         {
            if(strcmp(raj,"papel") == 0 || strcmp(raj,"Spock") == 0)
            {
              printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else
            {
              printf("Caso #%d: Bazinga!\n",i);
            }
         }
      }
 
    }
 
    return 0;
}
