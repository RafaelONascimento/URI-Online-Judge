#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int horaInicial, horaFinal, duracao;
  
  scanf("%d %d",&horaInicial, &horaFinal);
  
  
  if(horaInicial > horaFinal){
    duracao = ((24 - horaInicial) + horaFinal);
  }
  else if(horaInicial < horaFinal){
    duracao = (horaFinal - horaInicial);  
  }
  else if(horaInicial == horaFinal){
    duracao = 24;
  }
  
  printf("O JOGO DUROU %d HORA(S)\n",duracao);
  
  return 0;
}
