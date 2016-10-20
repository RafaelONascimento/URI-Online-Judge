#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  int i, tamanhoNumero;
  long int m , n , soma;
  char numero[20];

  while(scanf("%li %li",&m,&n),m != 0 && n != 0){
    int indiceAtual = 0;
    char numeroFinal[20];
    soma = m +n;
    sprintf(numero,"%li",soma);
    tamanhoNumero = strlen(numero);

    for(i = 0; i < tamanhoNumero; i++){
      if(numero[i] > 48 && numero[i] <= 57 ){
	numeroFinal[indiceAtual] = numero[i];
	indiceAtual++;
      }
    }
    numeroFinal[indiceAtual] = '\0';
    printf("%s\n",numeroFinal);
  }

  return 0;
}
