#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vetor[100];
char paso[12];

int main(){
  int caso, l, i, qtd,indice, resultado;
  
  scanf("%d",&caso);
  
  while(caso--){
    resultado = 0;
    scanf("%d",&qtd);
    for(i = 0; i <= qtd; i++){
      fgets(paso,12,stdin);
      if(paso[0] == 'L'){
	vetor[i] = -1;
      }
      else if(paso[0] == 'R'){
	vetor[i] = 1;
      }
      else if(paso[0] == 'S'){
	if(strlen(paso) == 9){
	  vetor[i] = vetor[(paso[8]-48)-1];
	}
	else if(strlen(paso) == 10){
	  indice = (((paso[8]-48)*10) + (paso[9] -48))-1;
	  vetor[i] = vetor[indice];
	}
      }
    }
    for(i = 0; i < qtd; i++){
      resultado += vetor[i];
    }
    printf("%d\n",resultado);
  }

  return 0;
}
