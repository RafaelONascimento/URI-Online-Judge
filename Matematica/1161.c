#include <stdio.h>
#include <stdlib.h>

unsigned long long calculoFatorial(int numero){
   unsigned long long  soma = 1;
   int i;
   
   for(i = numero; i >= 1; i--){
     soma *= i;
   }

   return soma;
}

int main(){
  unsigned long long somaFatorial;
  int m, n;
  
  while(scanf("%d %d",&m,&n) != EOF){
    somaFatorial = calculoFatorial(m) + calculoFatorial(n);
    printf("%llu\n",somaFatorial);
  }

  return 0;
  
}
