#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char ciclo[60];
  int flag = 0, qtd = 0, total = 0, valorJ = 0, i, tamanho;

  while(fgets(ciclo,60,stdin) || scanf("%d",&valorJ) != EOF){
    getchar();
    total = 0;
    tamanho = strlen(ciclo);
    ciclo[tamanho-1] = '\0';
    qtd = 0;
    flag = 0;
    for(i = 0; i < tamanho || ciclo[i] != '\0'; i++){
      if(ciclo[i] == 'R'){
	if(flag){
	  if(qtd == valorJ){
	    total++;
	    qtd = 1;
	  }
	  else{
	    qtd++;
	  }
	}
	else{
	  flag = 1;
	  qtd++;
	}
      }
      else if(ciclo[i] == 'W'){
	if(flag){
	  total++;
	  flag = 0;
	  qtd=0;
	}	
	total++;
      }
    }
    printf("%d\n",total);
  }
  return 0;
}
