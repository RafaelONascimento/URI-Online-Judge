#include <stdio.h>
#include <stdlib.h>

#define MAX 1124

int grafo[MAX][MAX], vis[MAX], flag = 0, n;

void dfs(int u, int k){
  int i;
  vis[u] = k;
  
  for(i = 0; i < n && !flag; i++){
    if(grafo[u][i]){
      if(!vis[i]) dfs(i,((k == 1)?2:1));
      else if(vis[i] == k) flag = 1;
    }
  }
  return;
}

int main(){
  int i, j;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&grafo[i][j]);
      grafo[i][j] = !grafo[i][j];
    }
  }

  for(i = 0; i < n && !flag; i++)
    if(!vis[i]) dfs(i,1);

  printf("%s\n",(!flag)?"Bazinga!":"Fail!");
  return 0;
}
