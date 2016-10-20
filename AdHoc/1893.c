#include <stdio.h>
#include <stdlib.h>

int main(){
  int primeiroDia, segundoDia, diferenca, diaAtual;
  
  scanf("%d %d",&primeiroDia,&diaAtual);
  
  if(diaAtual >= 0 && diaAtual <= 2){
    printf("nova\n");
  }
  else if(diaAtual >= 3 && diaAtual <= 96 && (primeiroDia > diaAtual)){
    printf("minguante\n");
  }
  else if(diaAtual >= 97 && diaAtual <= 100){
    printf("cheia\n");
  }
  else if(diaAtual >= 3 && diaAtual <= 96){
    printf("crescente\n");
  }
  else{
    printf("DiaAtual = %d, Difirenca == %d\n",diaAtual,diferenca);
  }
  return 0;
}
