#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int numero;
  int horasTrabalhadas;
  double valorHora;
  double salario;
  
  scanf("%d",&numero);
  scanf("%d",&horasTrabalhadas);
  scanf("%lf",&valorHora);
  
  salario = (valorHora * horasTrabalhadas);
  
  printf("NUMBER = %d\n",numero);
  printf("SALARY = U$ %.2f\n",salario);
 
  return 0;
 
}
