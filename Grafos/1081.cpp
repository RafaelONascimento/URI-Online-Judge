 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX 25
 
int grafo[MAX][MAX], visitado[MAX], nivel,limite[MAX];
 
int dfs(int u){
  int i, c, j;

  visitado[u] = 1;
   
  for(i = 0; i <= limite[u]; i++){
    if(!visitado[i] && grafo[u][i]){
      for(j = 1; j <= (nivel*2); j++) printf(" "); 
      printf("%d-%d pathR(G,%d)\n",u,i,i);
      nivel++;
      c = dfs(i);
    }
    else if(visitado[i] && grafo[u][i]){
      for(j = 1; j <= (nivel*2); j++) printf(" "); 
      printf("%d-%d\n",u,i);
    }
  }
 
  nivel--;
  return c;
}

int main(){
  int t , n , m, i,j, u, v,caso = 1, flag = 0;

  scanf("%d",&t);
  
  for(caso = 1; caso <= t; caso++){
    nivel = 1;
    scanf("%d %d",&n,&m);
    memset(visitado,0,sizeof(visitado));
    memset(grafo,0,sizeof(grafo));
    memset(limite,-1,sizeof(limite));
    
    for(i = 0; i < m; i++){
      scanf("%d %d",&u,&v);
      grafo[u][v] = 1;
      limite[u] = (limite[u] < v)?v:limite[u];
    }
    
    printf("Caso %d:\n",caso);
    
    for(i = 0,flag = 0; i < n; i++){
      if(!visitado[i] && limite[i] >= 0){
       	if(flag){
	  printf("\n");
	}
	nivel = 1;
	dfs(i);
	flag = 1;
      }
    }
    printf("\n");
  }
  
  return 0;
}
