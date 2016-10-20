#include <stdio.h>
#include <stdlib.h>
int main () {
 
  int T,i,j,N[1000];
 
 scanf("%d",&T);
 j = 0;
 for(i=0;i<1000;i++){ 
   printf("N[%d] = %d\n",i,j);
   if(j != T-1){
     j++;
   }
   else{
     j = 0;
   }
 }
 return 0;
}
