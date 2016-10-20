#include <stdio.h>
#include <stdlib.h>

int potencia(int x){
  int contador = 0;
  
  while(x){
    contador += x&1;
    x = x >> 1;
  }
  
  return contador;
}
 
 
int main(){
  int n, ui, ri, li, pontosUi, pontosRi, pontosLi, i;
 
  while(scanf("%d",&n),n != 0){
    pontosUi = 0;
    pontosRi = 0;
    pontosLi = 0;
 
    for(i= 0; i < n; i++){
      scanf("%d %d %d",&ui,&ri,&li);
      int rodadaUi = 0, rodadaLi = 0, rodadaRi = 0;
      if(ui > li && ui > ri){
        rodadaUi++;
      }
      else if(ri > ui && ri > li){
        rodadaRi++;
      }
      else{
	rodadaLi++;
      }
 
      if(potencia(ui) == 1){
	rodadaUi++;
      }
      else{
	rodadaUi = 0;
      }
      if(potencia(ri) == 1){
	rodadaRi++;
      }
      else{
	rodadaRi = 0;
      }
      if(potencia(li) == 1){
	rodadaLi++;
      }
      else{
	rodadaLi= 0;
      }
      pontosUi += rodadaUi;
      pontosRi += rodadaRi;
      pontosLi += rodadaLi;
    }
    
    if(pontosUi > pontosLi && pontosUi > pontosRi){
      printf("Uilton\n");
    }
    else if(pontosRi > pontosUi && pontosRi > pontosLi){
      printf("Rita\n");
    }
    else if(pontosLi > pontosUi && pontosLi > pontosRi){
      printf("Ingred\n");
    }
    else{
      printf("URI\n");
    }
  }
 
  return 0;
}
