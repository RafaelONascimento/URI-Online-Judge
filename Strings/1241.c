#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n, tamanhoB,tamanhoA, i, diferenca , pontuacao = 0;
  long long int a , b;
  char charA[1000], charB[1000];

  scanf("%d",&n);

  while(n != 0){
    scanf("%s %s",charA,charB); 
    
    tamanhoB = strlen(charB);
    tamanhoA = strlen(charA);

    diferenca = tamanhoA - tamanhoB;

    if(diferenca < 0){
      printf("nao encaixa\n");
      n--;
      break;
    }
    
    for(i = 0; i < tamanhoB; i++){
      if( charB[i] == charA[diferenca + i]){
	pontuacao++;
      }
    }

    
    if(pontuacao == tamanhoB){
      printf("encaixa\n");
    }
    else{
      printf("nao encaixa\n");
    }

    pontuacao = 0;
    n--;
  }
  
  return 0; 
}
