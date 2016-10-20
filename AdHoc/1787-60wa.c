#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int potencia(int x){
  int contador = 0;
  
  while(x){
    contador += x&1;
    x = x >> 1;
  }
  
  return contador;
}
 
int main(){
  int n,pontos[3],pontosRodada[3] ,i;
  int ui, ri, li;
  
  memset(pontos,0,sizeof(int));
  while(scanf("%d",&n),n  != 0){
    int a =0, b = 0, c = 0;
    for(i= 0; i < n; i++){
      scanf("%d %d %d",&ui,&ri,&li);
      pontosRodada[0] = 0;
      pontosRodada[1] = 0;
      pontosRodada[2] = 0;

      if(ui > li && ui > ri){ 
	++pontosRodada[0];
      }
      else if(ri > ui && ri > li){
        ++pontosRodada[1];
      }
      else{
	++pontosRodada[2];
      }
      
      pontos[0] += (potencia(ui)?++pontosRodada[0]:0);
      pontos[1] += (potencia(ri)?++pontosRodada[1]:0);
      pontos[2] += (potencia(li)?++pontosRodada[2]:0);
      
      printf("UI = %d\nRI = %d\nLI = %d\n",pontos[0],pontos[1],pontos[2]);
    }
 
    if(pontos[0] > pontos[1] && pontos[0] > pontos[2]){
      printf("Uilton\n");
    }
    else if(pontos[1] > pontos[0] && pontos[1] > pontos[2]){
      printf("Rita\n");
    }
    else if(pontos[2] > pontos[1] && pontos[2] > pontos[0]){
      printf("Ingred\n");
    }
    else{
      printf("URI\n");
    }
  }
  return 0;
}
