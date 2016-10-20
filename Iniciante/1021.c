#include <stdio.h>
#include <stdlib.h>
 
double N;
 
int main()
{
 
  scanf("%lf",&N);
 
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", contadorMonetario(100.00));
  printf("%d nota(s) de R$ 50.00\n", contadorMonetario(50.00));
  printf("%d nota(s) de R$ 20.00\n", contadorMonetario(20.00));
  printf("%d nota(s) de R$ 10.00\n", contadorMonetario(10.00));
  printf("%d nota(s) de R$ 5.00\n", contadorMonetario(5.00));
  printf("%d nota(s) de R$ 2.00\n", contadorMonetario(2.00));
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", contadorMonetario(1.00));
  printf("%d moeda(s) de R$ 0.50\n", contadorMonetario(0.50));
  printf("%d moeda(s) de R$ 0.25\n", contadorMonetario(0.25));
  printf("%d moeda(s) de R$ 0.10\n", contadorMonetario(0.10));
  printf("%d moeda(s) de R$ 0.05\n", contadorMonetario(0.05));
  printf("%d moeda(s) de R$ 0.01\n", contadorMonetario(0.01));
 
   return 0;
}
 
int contadorMonetario(double valorMonetario)
{
  int contador = 0;
  
  if(N >= valorMonetario){
    for(contador = 0; N >= valorMonetario; contador ++){
      N = (N - valorMonetario);
    }
 
    return contador;
  }
  else{
    return 0;
  }
  
  return 0;
}
