#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long llu;

int main(){
  llu numero;

  scanf("%llu",&numero);
  
  while(numero){
    printf("%llu",numero%10);
    numero /= 10;
  }
  printf("\n");
  return 0; 
}
