#include <stdio.h>
#include <stdlib.h>

int main(){
  int  casos, jogos, i, j, pontosR, pontosG, pontosB;
  char timeA, timeB;

  scanf("%d",&casos);
  
  while(casos--){
    pontosR = 0;
    pontosG = 0;
    pontosB = 0;
    scanf("%d",&jogos);
    
    




    if(pontosR == pontosG && pontosG == pontosB){
      printf("trempate\n");
    }
    else if(pontosR > pontosG && pontosR > pontosB){
      printf("red\n");
    }
    else if(pontosG > pontosR && pontosG > pontosB){
      printf("green\n");
    }
    else if(pontosB > pontosR && pontosB > pontosG){
      printf("blue\n");
    }
    else if(pontosR == pontosG || pontosR == pontosB || pontosB == pontosG){
      printf("empate\n");
    }
  }

  return 0;
}
