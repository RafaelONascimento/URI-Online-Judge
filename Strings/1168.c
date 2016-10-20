#include <stdio.h>
#include <stdlib.h>

int main(){
  int i ,j,casos, totalLeds = 0, numeroLed;
  char numero[101];

  scanf("%d",&casos);
  
  for(i = 0; i < casos; i++){
    scanf("%s",numero);
    for(totalLeds = 0,j = 0; numero[j] != '\0'; j++){
      numeroLed = numero[j] -48; 
      if(numeroLed == 0 || numeroLed == 6 || numeroLed == 9){
	totalLeds += 6;
      }
      else if(numeroLed == 1){
	totalLeds += 2;
      }
      else if(numeroLed == 2 || numeroLed == 3 || numeroLed == 5){
	totalLeds += 5;
      }
      else if(numeroLed == 4){
	totalLeds += 4;
      }
      else if(numeroLed == 7){
	totalLeds += 3;
      }
      else if(numeroLed == 8){
	totalLeds += 7;
      }
    }
    printf("%d leds\n",totalLeds);
  }
  return 0;
}
