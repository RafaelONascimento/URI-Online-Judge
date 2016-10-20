#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX 25
//#define MAXV 20

int grafo[MAX][MAX], visitado[MAX],limite[MAX],p,pastel[MAX], nivel;

int dfs(int u){
  int i, c, j;
  
  visitado[u] = 1;
  pastel[nivel] = u;
  
  for(i = 1; i <= limite[u]; i++){
    if(!visitado[i] && grafo[u][i]){
      nivel++;
      c = dfs(i);
    }
    else if(visitado[i] && grafo[u][i] && u!= pastel[1]){
      if(i == p){
	grafo[u][i] = 2;
	grafo[i][u] = 2;
	grafo[i][pastel[1]] = 2;
	grafo[pastel[1]][i] = 2;
      }
    }
  }
  
  nivel--; 
  return c;
}


int main(){
  int n , m, i,j, u, v,jk;
  
  while(scanf("%d %d",&n,&m) != EOF){
    memset(grafo,0,sizeof(grafo));
    memset(limite,-1,sizeof(limite));
    jk = 0;
    
    for(i = 0; i < m; i++){
      scanf("%d %d",&u,&v);
      grafo[u][v] = 1;
      grafo[v][u] = 1;
      limite[u] = (limite[u] < v)?v:limite[u];
      limite[v] = (limite[v] < u)?u:limite[v];
    }
    
    for(i = 1; i <= n; i++){
      memset(visitado,0,sizeof(visitado));
      memset(pastel,0,sizeof(pastel));
      nivel = 0;
      p = i;
      dfs(i);
    }
    
    for(i=1; i<=n; i++)
      for(j= 1; j <=n; j++)
	if(grafo[i][j] == 1)
	  jk++;
    
    printf("%d\n",(jk/2));
  }
  
  return 0;
}
