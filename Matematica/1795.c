#include <stdio.h>
#include <stdlib.h>

long long int potencia3(int linha){
  long long int potencia = 1;
  
  while(linha--){
    potencia *= 3;
  }

  return potencia;
}

int main(){
  int r;
  long long int soma;
  scanf("%d",&r);

  soma = potencia3(r);
  printf("%lld\n",soma);
  
  return 0;
}

 
