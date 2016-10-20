#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <map>

using namespace std;

#define MAX 212345

int vis[MAX], viz[MAX], ordem, ciclo;

void dfs(int u){
  int v = viz[u];
  vis[u] = ordem;

  if(!vis[v]) dfs(v);
  else if(vis[v] == ordem) ciclo++;

  return;
}

int main(){
  int u , v, n = 0;
  char pessoa1[12], pessoa2[12];
  map<string,int>casais;
  
  while(scanf(" %s %s\n",pessoa1,pessoa2) !=EOF){
    string p1(pessoa1), p2(pessoa2);
    u = (casais.find(p1) == casais.end())? casais[p1] = ++n :casais[p1];
    v = (casais.find(p2) == casais.end())? casais[p2] = ++n :casais[p2];
    viz[u] = v;
  }

  memset(vis,0,sizeof(vis));
  ciclo = 0;
  ordem = 1;
  for(int i = 1; i <= n; i++){
    if(!vis[i]){
      dfs(i);
      ordem++;
    }
  }

  printf("%d\n",ciclo);
  return 0;
}
