#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11234

int indice[MAX],valor[MAX];

int main(){
  int t, j, mV,i,mI, vF , iF;

  while(scanf("%d",&t),t){
    memset(indice,0,sizeof(indice));
    memset(valor, 0,sizeof(valor));
      
    for(i = 0; i < t; i++){
      scanf("%d",&valor[i]);
      indice[i] = i;
    }

    for(i = 0, mV = -1, mI = 0; i < t; i++){
      if(mV < valor[i]){
	mV = valor[i];
	mI = i;
      }
    }

    valor[mI] = - 28;

    for(i = 0, vF = -1, iF =0; i <t; i++){
      if(vF < valor[i]){
	vF = valor[i];
	iF = i;
      }
    }

    printf("%d\n",(iF+1));
    
  }

  return 0;
}
