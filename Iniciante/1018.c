#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int valorTotal;
  int restante;
  int qtd100;
  int qtd50;
  int qtd20;
  int qtd10;
  int qtd5;
  int qtd2;
  int qtd1;
 
  scanf("%d",&valorTotal);
  restante = valorTotal;
  
  if(restante >= 100){
    for(qtd100= 0; restante >= 100;qtd100++){
	restante = (restante - 100);
    }
  }
  else{
    qtd100 = 0;
  }
  if(restante >= 50){
    for(qtd50=0; restante >= 50;qtd50++){
      restante = (restante - 50);
    }
  }
  else{
    qtd50 = 0;
  }
  if(restante >= 20){
    for(qtd20=0; restante >= 20; qtd20++){
      restante = (restante - 20);
    }
  }
  else{
    qtd20 =0;
  }
  if(restante >= 10){
    for(qtd10= 0; restante >= 10; qtd10++){
      restante = (restante - 10);
    }
  } 
  else{
    qtd10 = 0;
  } 
  if(restante >= 5){
    for(qtd5 = 0; restante >= 5; qtd5++)
      {
	restante = (restante - 5);
      }
  }
  else{
    qtd5 = 0;
  }
  if(restante >=2){
    for(qtd2=0; restante >=2; qtd2++){
      restante = (restante - 2);
    }
  }
  else{
    qtd2 = 0;
  }
 
  if(restante >= 1){
    for(qtd1=0; restante >= 1; qtd1++){
      restante = (restante - 1);
    }
  }
  else{
    qtd1 = 0;
  }
 
   printf("%d\n",valorTotal); 
   printf("%d nota(s) de R$ 100,00\n", qtd100);
   printf("%d nota(s) de R$ 50,00\n", qtd50);
   printf("%d nota(s) de R$ 20,00\n", qtd20);
   printf("%d nota(s) de R$ 10,00\n", qtd10);
   printf("%d nota(s) de R$ 5,00\n", qtd5);
   printf("%d nota(s) de R$ 2,00\n", qtd2);
   printf("%d nota(s) de R$ 1,00\n", qtd1);
   return 0;
}
