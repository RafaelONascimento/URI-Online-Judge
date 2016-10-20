#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n, tamanhoB,tamanhoA, i, diferenca , pontuacao = 0;
  long long int a , b;
  char charA[40], charB[40];
  
  scanf("%d",&n);
  
  while(n != 0){
    scanf("%lli %lli",&a,&b);

    sprintf(charA, "%lli", a);
    sprintf(charB, "%lli", b);
    
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
