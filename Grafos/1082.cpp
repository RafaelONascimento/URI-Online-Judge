#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>

using namespace std;

#define MAX 28

int visitado[MAX],pilha[MAX], comp;
int n , m;
queue<int> adj[MAX],topS;

void dfs(){
  int v  = 0,i = 0;

  while(!topS.empty()){
    v = topS.front();
    topS.pop();
    visitado[v] = comp;
    pilha[v] = 1;

    while(!adj[v].empty()){
      i = adj[v].front();
      adj[v].pop();
      
      if(!pilha[i]){
	pilha[i] = 1;
	topS.push(i);
      }
    }
  }
}


int main(){
  int t , i,j,l;
  char uv[8];
  
  scanf("%d",&t);

  for(j=1; j <= t; j++){
    comp = 0;
    scanf("%d %d",&n,&m);
    getchar();
    memset(visitado,0,sizeof(visitado));
    
    for(i = 0; i < m; i++){
      fgets(uv,8,stdin);
      adj[(uv[0]-97)].push((uv[2]-97));
      adj[(uv[2]-97)].push((uv[0]-97));
    }

    memset(pilha,0,sizeof(pilha));
    
    for(i = 0; i < n; i++){
      if(!visitado[i] && !pilha[i]){
	comp++;
	topS.push(i);
	dfs();
      }
    }
    
    printf("Case #%d:\n",j);
    
    for(i =1; i <= comp; i++){
      for(l = 0; l < n; l++){
	if(visitado[l] == i) printf("%c,",(l+97));
      }
      printf("\n");
    }

    printf("%d connected components\n\n",comp);
  }
  return 0;
}
