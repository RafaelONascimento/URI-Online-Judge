#include <stdio.h>
#include <stdlib.h>

int numChamadas;

int fib(int numero){
  numChamadas++;
  if(numero == 0 || numero == 1){
    return numero;
  }

  return (fib(numero-1)+fib(numero -2)); 
}

int main(){
  int n, numero, fibonacci;
  
  scanf("%d",&n);

  while(n--){
    numChamadas = 0;
    scanf("%d",&numero);
    
    fibonacci = fib(numero);
    
    printf("fib(%d) = %d calls = %d\n",numero,numChamadas-1,fibonacci);
  }

  return 0;
}
