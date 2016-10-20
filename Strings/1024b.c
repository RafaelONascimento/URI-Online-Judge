#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11234

int main(){
  int tamanho, n, i, j , a;

  scanf("%d",&n);
  getchar();

  while(n--){
    char texto[MAX],txtAux[MAX];
    memset(texto,'\0',sizeof(texto));
    memset(txtAux,'\0',sizeof(txtAux));
    fgets(texto,MAX,stdin);
    tamanho = strlen(texto);
 
    if(n) texto[tamanho-1] = '\0';
    else texto[tamanho] = '\0';
    a = tamanho-1;
    for(i = 0; i <= tamanho; i++){
      if(texto[i] >= 65 && texto[i] <= 99) 
	texto[i] += 3; 
      else if(texto[i] >= 97 && texto[i] <= 122) 
	texto[i] += 3;
      else if(texto[i] == '\n' || texto[i] == '\0'){
	texto[i] = '\0';
	a = i;
	break;
      }
    }

    for(i = 0, j = (a-1); i < a; i++,j--){
      txtAux[i] = texto[j];
    }
   
    for(i = (a/2); i < a && texto[i] != '\0'; i++)
      txtAux[i] -=1;

    printf("%s\n",txtAux);
  }
  return 0;
}
