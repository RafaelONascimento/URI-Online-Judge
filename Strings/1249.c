#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int tamanho, i;
  char texto[65];

  while(fgets(texto,65,stdin)){
    tamanho = strlen(texto);
    texto[tamanho-1] = '\0';

    for(i = 0; i < tamanho && texto[i] != '\0'; i++){
      if(texto[i] >= 65 && texto[i] <= 90){
	if((texto[i]+13) > 90)
	  texto[i] = ((texto[i] + 12)-90)+65;
	else
	  texto[i] = texto[i]+13;
      }
      else if(texto[i] >= 97 & texto[i] <= 122){
        if((texto[i]+13) > 122)
	  texto[i] = ((texto[i] + 12)-122)+97;
	else
	  texto[i] = texto[i]+13;
      }
    }
    printf("%s\n",texto);
  }

  return  0;
}
