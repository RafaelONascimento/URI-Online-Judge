#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int N, X[1000], i, menor , posicao;
 
    scanf("%d",&N);
 
    for(i = 0; i < N; i++){
      scanf("%d",&X[i]);
    }
 
    menor = X[0];
    posicao = 0;
    
    for(i = 0; i < N;i++){
      if(X[i]<menor){
	menor = X[i];
	posicao = i;
      }   
    }
    
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",posicao);
    
    return 0;
}
