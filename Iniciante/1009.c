#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  char nome[30];
  double salario;
  double vendasEfetuadas;
  double valorReceber;
  
  scanf("%s",nome);
  scanf("%lf",&salario);
  scanf("%lf",&vendasEfetuadas);
  
  valorReceber = (((vendasEfetuadas/100) * 15) + salario);
  
  printf("TOTAL = R$ %.2f\n",valorReceber);
  
  return 0;
}
