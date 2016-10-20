#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n, tamanho, j, i;
  char texto[60];
  scanf("%d",&n);
  getchar();
  
  while(n--){
    fgets(texto,60,stdin);
    scanf("%d",&j);
    getchar();
    tamanho = strlen(texto);
    texto[tamanho-1] = '\0';
    
    for(i = 0; i < tamanho && texto[i] != '\0'; i++){
      if((texto[i]-j) < 65) 
	texto[i] = ((texto[i]-j)-65)+91;
      else 
	texto[i] = texto[i]-j;
    }
    printf("%s\n",texto);
  }

  return 0;
}
