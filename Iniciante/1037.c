#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  float valor;
 
  scanf("%f",&valor);
 
  if((valor >= 0) && (valor <=25)){
    printf("Intervalo [0,25]\n");
  }
  else if((valor >= 25.00001) && (valor <= 50.0000000)){
    printf("Intervalo (25,50]\n");
  }
  else if((valor >= 50.00000001) && (valor <= 75.0000000)){
    printf("Intervalo (50,75]\n");
  }
  else if((valor >= 75.00000001) && (valor <= 100.0000000)){
    printf("Intervalo (75,100]\n");
  }
  else{
    printf("Fora de intervalo\n");
  }
  
  return 0;
}
