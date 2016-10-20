#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int valor;
  int anos;
  int meses;
  int dias;
  
  scanf("%d",&valor);
  
  anos = (valor/365);
  meses = ((valor -(anos*365))/30);
  dias = ((valor -(anos*365)) - (meses * 30));
 
  printf("%d ano(s)\n",anos);
  printf("%d mes(es)\n",meses);
  printf("%d dia(s)\n",dias);
  
  return 0;
}
