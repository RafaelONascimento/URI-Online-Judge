#include <stdio.h>
#include <stdlib.h>

long int tamanhoNumero(unsigned long long numero){
  long int tamanho = 0;
  
  while(numero){
    numero = (numero/10);
    ++tamanho;
  }

  return tamanho;
}

int tamanho(unsigned long long n)
{
    int contador = 0;
     
    while(n)
    {
        n = n / 10;
        ++contador;
    }
 
    return contador;
}


int main(){
  unsigned long long numero;
  
  scanf("%llu",&numero);

  printf("Tamanho = %d\n",tamanho(numero));

  return 0;
}
