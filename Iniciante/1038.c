#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int codigo;
  int qtd;
  float total;
 
  scanf("%d %d",&codigo,&qtd);
  
  if(codigo == 1){
    total = 4 * qtd;
    printf("Total: R$ %.2f\n",total);
  }
  else if(codigo == 2){
    total = 4.5 * qtd;
    printf("Total: R$ %.2f\n",total);
  }
  else if(codigo == 3){
    total = 5 * qtd;
    printf("Total: R$ %.2f\n",total);
  }
  else if(codigo == 4){
    total = 2 * qtd;
    printf("Total: R$ %.2f\n",total);
  }
  else if(codigo == 5){
    total = 1.5 * qtd;
    printf("Total: R$ %.2f\n",total);
  }
  
  return 0;
}
