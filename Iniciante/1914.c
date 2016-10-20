#include <stdio.h>
#include <stdlib.h>

int main(){
  char jogador1[20], jogador2[20], escolhaJ1[7], escolhaJ2[7], resposta;
  int n, numeroJ1, numeroJ2, soma;
  
  scanf("%d",&n);
  
  while(n != 0){
    scanf("%s %s %s %s",jogador1,escolhaJ1,jogador2,escolhaJ2);
    scanf("%d %d",&numeroJ1,&numeroJ2);
    
    soma = numeroJ1 + numeroJ2;
    
    if((soma%2) == 0){
      resposta = 'P';
    }
    else{
      resposta = 'I';
    }

    if(escolhaJ1[0] == resposta){
      printf("%s\n",jogador1);
    }
    else{
      printf("%s\n",jogador2);
    }
    n--;
  }

  return 0;
}
