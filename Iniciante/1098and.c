#include <stdio.h>
#include <stdlib.h>

int main(){
  
  float i, j;
  
  for(i = 0, j= 0.8; i <= 2.2; i+= 0.2, j+= 0.2){
    printf("I= %.1f J=%.1f\n", i, j+= 0.2);
    printf("I= %.1f J=%.1f\n", i, j+= 1.2);
    printf("I= %.1f J=%.1f\n", i, j+= 2.2);
  }
}
