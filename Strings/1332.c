#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaOne(char *numero){
  int pontuacao = 0;
  if(numero[0] == 'o'){
    pontuacao++;
  }
  if(numero[1] == 'n'){
    pontuacao++;
  }
  if(numero[2] == 'e'){
    pontuacao++;
  }
  
  return pontuacao;
}

int verificaTwo(char *numero){
  int pontuacao = 0;
  if(numero[0] == 't'){
    pontuacao++;
  }
  if(numero[1] == 'w'){
    pontuacao++;
  }
  if(numero[2] == 'o'){
    pontuacao++;
  }

  return pontuacao;
}

int main(){
  int n, i;
  char numero[10];

  scanf("%d",&n);
  
  while(n != 0){
    scanf("%s",numero);

    if(strlen(numero) > 3){
      printf("3\n");
    }
    else if(verificaOne(numero) >= 2){
      printf("1\n");
    }
    else if(verificaTwo(numero) >= 2){
      printf("2\n");
    }
    n--;
  }

  return 0;
}
