#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int horaInicial, minutoInicial, horaFinal, minutoFinal;
  int horas, minutos, duracaoGeral;
  
  scanf("%d %d %d %d",&horaInicial,&minutoInicial,&horaFinal,&minutoFinal);
  
  if ((horaFinal == horaInicial) && (minutoFinal == minutoInicial)){
    duracaoGeral = 1440;
  }
  
  else if(horaInicial <= horaFinal){
    duracaoGeral = (((horaFinal * 60) + minutoFinal) - ((horaInicial * 60) + minutoInicial));
    
  }
  else if(horaInicial >= horaFinal){
    duracaoGeral = (((horaFinal * 60) + minutoFinal) + (1440 - ((horaInicial * 60) + minutoInicial)));
  }
  
  horas = (duracaoGeral/60);
  minutos = ((duracaoGeral - (horas * 60)));
  
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
  
  return 0;
}
