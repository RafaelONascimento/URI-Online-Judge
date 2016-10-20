#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>
#include <list>

using namespace std;

#define MAX 501
#define INF 99999999

int idade[MAX], aresta[MAX], visitado[MAX];
list<int> adj[MAX];

int n, m, menor;

void dfs(int u){
  list<int>::iterator it;
  int v;
  visitado[u] = 1;
  for(it = adj[u].begin(); it != adj[u].end(); it++){
    if(!visitado[*it]){
      v = *it;
      if(menor > idade[v])menor = idade[v];
      dfs(v);
    }	
  }
  return;
}
void troca(int contA, int contB, int a, int b){
  int tmp;
  tmp = idade[contA];
  idade[contA] = idade[contB];
  idade[contB] = tmp;
  aresta[a] = contB;
  aresta[b] = contA;
  
}
   
int main(){
  int j, u, v,i, r ,z;
  char op;
  while(  scanf("%d %d %d",&n,&m,&j) != EOF){
    for(i = 1; i <= 500; i++) aresta[i] = i;
    memset(idade,0,sizeof(idade));
    
    for(i =1; i <= n; i++) scanf("%d",&idade[i]);
    
    for(i =1; i <= m; i++){
      scanf("%d %d",&u,&v);
      adj[v].push_back(u);
    }
    
    while(j--){
      getchar();
      scanf("%c",&op);
      
      if(op == 'P'){
	memset(visitado,0,sizeof(visitado));
	scanf("%d",&u);
	menor = INF;
	dfs(aresta[u]);	
	if(menor == INF) printf("*\n");
	else printf("%d\n",menor);
      }
      else if(op== 'T'){
	scanf("%d %d",&u,&v);
	troca(aresta[u],aresta[v], u ,v);
      }
    }
    for(i = 1; i <= n; i++) adj[i].clear();
  }
  return  0;
}
