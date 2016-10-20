#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char letras[200];
int qtd[200], j;

int main(){
  int aux,i,k,max, n, tamanho,flag, y;
  char texto[200],  cAux;
  
  scanf("%d\n",&n);

  for(y = 1; y <= n; y++){
    j = 0;
    fgets(texto,200,stdin);
    texto[strlen(texto)-1] = '\0';
    tamanho = strlen(texto);
    memset(qtd,0,sizeof(qtd));
    
    for(i = 0; i < tamanho; i++){
      flag = 0;
      aux = 0;
      if(texto[i] >= 65 && texto[i] <= 90 && texto[i] != ' ') aux = 1;
      else if(texto[i] >= 97 && texto[i] <= 122 && texto[i] != ' ') aux = 1;
      
      if(aux){
	for(k= 0; k < j && !flag; k++)
	  if(tolower(letras[k]) == texto[i]){
	    qtd[k]++;
	    flag = 1;
	  }
	
	if(!flag){
	  letras[j] = tolower(texto[i]); 
	  qtd[j];
	  j++;
	}
      }
    }
    
    max = 0;
    
    for(i = 0; i < j; i++) if(qtd[i] > max) max = qtd[i];
    
    j = (y == n)?j+1:j;

    for(i = 97; i <= 122 ; i++){
      for(k = 0; k < j; k++){
	if(qtd[k] == max && letras[k] == i) 
	  printf("%c",letras[k]);
      }
    }
   
    printf("\n");
  }
  return 0; 
}
