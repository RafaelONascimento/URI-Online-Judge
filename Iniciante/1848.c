#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
  int qtdPiscada = 0, valorAcumulado = 0;
  char text[10];
  
  while(qtdPiscada < 3){
    fgets(text, 10, stdin);
    
    if(text[0] == 'c'){
      qtdPiscada++;
      printf("%d\n",valorAcumulado);
      valorAcumulado = 0;
    }
    if(text[0] == '*'){
      valorAcumulado += 4;
    }
    if(text[1] == '*'){
      valorAcumulado += 2;
    }
    if(text[2] == '*'){
      valorAcumulado += 1;
    }
  }
  
  return 0;
}
