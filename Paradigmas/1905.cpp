#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ganhador = 0;

struct cordenada{
  int x, y, visitado;
};

typedef struct cordenada cord;

void busca(int grafo[5][5], cord cordenadas[5][5], int i, int j){
  if(i >= 0 && i < 5 && j >= 0 && j < 5 && !ganhador){
    cordenadas[i][j].visitado = 1;
    if(i == 4 && j == 4){
      ganhador = 1;
    }
    else{
      if(i+1 < 5 && grafo[i+1][j] == 0 && !cordenadas[i+1][j].visitado)
	busca(grafo,cordenadas,i+1,j);
      if(i-1 < 5 && grafo[i-1][j] == 0 && !cordenadas[i-1][j].visitado)
	busca(grafo,cordenadas,i-1,j);
      if(j+1 < 5 && grafo[i][j+1] == 0 && !cordenadas[i][j+1].visitado)
	busca(grafo,cordenadas,i,j+1);
      if(j-1 < 5 && grafo[i][j-1] == 0 && !cordenadas[i][j-1].visitado)
	busca(grafo,cordenadas,i,j-1);
    }
  }
}

int main(){
  int i,j, t, grafo[5][5];
  cord cordenadas[5][5];
  scanf("%d",&t);

  while(t--){
    memset(grafo,0,sizeof(grafo));
    memset(cordenadas,0,sizeof(cordenadas));
    for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++){
	scanf("%d",&grafo[i][j]);
	cordenadas[i][j].x = i;
	cordenadas[i][j].y = j;
	cordenadas[i][j].visitado = 0;
      }
    }
    
    ganhador = 0;
    busca(grafo,cordenadas,0,0);
    
    printf("%s\n",(ganhador)?"COPS":"ROBBERS");
  }
  return 0;
}
