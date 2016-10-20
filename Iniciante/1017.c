#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int tempoGasto;
  int velocidadeMedia;
  float distancia;
  float qtdLitros;
  
  scanf("%d",&tempoGasto);
  scanf("%d",&velocidadeMedia);
  
  distancia = (tempoGasto * velocidadeMedia);
  qtdLitros = (distancia / 12);
    
  printf("%.3f\n",qtdLitros);
 
  return 0;
}
