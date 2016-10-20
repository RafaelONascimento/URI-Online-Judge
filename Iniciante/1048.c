#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  float salario, novoSalario, reajuste;
  int percentual;
  
  scanf("%f",&salario);
  
  if((salario >= 0) && (salario <= 400)){
    percentual = 15;
    reajuste = ((salario / 100)* percentual);
    novoSalario = salario + reajuste;}
  else if((salario >= 400.1) && (salario <= 800)){
    percentual = 12;
    reajuste = ((salario/100)*percentual);
    novoSalario = salario + reajuste;
  }
  else if((salario >= 800.01) && (salario <= 1200)){
    percentual = 10;
    reajuste = ((salario /100)*percentual);
    novoSalario = salario + reajuste;
  }
  else if((salario >= 1200.01) && (salario<=2000)){
    percentual = 7;
    reajuste = ((salario / 100)*percentual);
    novoSalario = salario + reajuste;
  }
  else if(salario > 2000){
    percentual = 4;
    reajuste = ((salario/100)*percentual);
    novoSalario = salario + reajuste;
  }
  
  printf("Novo salario: %.2f\n",novoSalario);
  printf("Reajuste ganho: %.2f\n",reajuste);
  printf("Em percentual: %d %%\n",percentual);
  
  return 0;
}
