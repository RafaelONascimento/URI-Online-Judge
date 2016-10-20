#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11234

int grafo[MAX][MAX], lg[MAX], visitado[MAX], pilha[MAX], ciclo;

int dfs(int u){
  int i, c = 0;

  visitado[u] = 1;
  pilha[u] = 1;
  
  for(i = 0; i < lg[u] && !c; i++){
    if(!visitado[grafo[u][i]])
      c = dfs(grafo[u][i]);
    else if(pilha[grafo[u][i]])
      c = 1;
  }
  pilha[u] = 0;
  return c;
}

int main(){
  int t , n , m, i, u, v;
  
  scanf("%d",&t);

  while(t--){
    scanf("%d %d",&n,&m);
    
    memset(lg,0,sizeof(lg));
    memset(visitado,0,sizeof(visitado));
    ciclo = 0;

    for(i = 0; i < m; i++){
      scanf("%d %d",&u,&v);
      grafo[u][lg[u]] = v;
      lg[u]++;
    }
    
    for(i = 1; i <= n && !ciclo ; i++){
      if(!visitado[i]){
	 ciclo += dfs(i);
      }
    }

    printf("%s\n",(ciclo)?"SIM":"NAO");
  }

  return 0;
}
