#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j,l,m, k;

  while(scanf("%d",&k) != EOF){
    m = k/2;
    for(i = 0;i < k; i+=2){
      for(l = 0; l < m; l++){
	printf(" ");
      }
      m--;
      for(j = 0; j <= i; j++){
	printf("*");
      }
      printf("\n");
    }
    m = (!(k%2))?k/2:(k/2)+1;
    printf("%*s\n",m,"*");
    m+=1;
    printf("%*s\n\n",m,"***");
  }
  return 0;
}
