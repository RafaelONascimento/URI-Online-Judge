#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char sheldon[10], raj[10], resposta[10];
   int n, i, result;
 
   scanf("%d",&n);
 
   for(i = 1; i <= n ; i++){
     scanf("%s %s",raj,sheldon);
       
     if(strcmp(sheldon,raj) == 0){
       printf("empate\n");
     }
     else
       {
         if(strcmp(raj,"tesoura") == 0){
	   if(strcmp(sheldon,"spock") == 0 || strcmp(sheldon,"pedra") == 0){
	     printf("sheldon\n");
	   }
	   else{
	     printf("rajesh\n");
	   }
         }
         else if(strcmp(raj,"lagarto") == 0){
	   if(strcmp(sheldon,"tesoura") == 0 || strcmp(sheldon,"pedra") == 0){
	     printf("sheldon\n");
	   }
	   else{
	     printf("rajesh\n");
	   }
         }
         else if(strcmp(raj,"papel") == 0){
	   if(strcmp(sheldon,"tesoura") == 0 || strcmp(sheldon,"lagarto") == 0){
	     printf("sheldon\n");
	   } 
	   else{
	     printf("rajesh\n");
	   }
         }
         else if(strcmp(raj,"spock") == 0){
	   if(strcmp(sheldon,"papel") == 0 || strcmp(sheldon,"lagarto") == 0){
	     printf("sheldon\n");
	   }
	   else{
	     printf("rajesh\n");
	   }
         }
         else if(strcmp(raj,"pedra") == 0){
	   if(strcmp(sheldon,"papel") == 0 || strcmp(sheldon,"spock") == 0){
	     printf("sheldon\n");
	   }
	   else{
	     printf("rajesh\n");
	   }
         }
       }
   }
 
    return 0;
}
