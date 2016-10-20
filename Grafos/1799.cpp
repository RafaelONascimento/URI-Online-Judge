#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
#include <utility>
#include <iostream>
#include <map>

using namespace std;

#define MAX 4010
#define INF 112345

int vis[MAX], k= 0, c = 3, z = 0;

list<int>adj[MAX];
map<int,string>graph;
map<int,string>::iterator it;

int find(string value){
  int i = -1;

  for(it = graph.begin(); it != graph.end(); it++)
    if(it->second == value) i = it->first;
  return i;
}

int dfs(int u, int v){
  list<int>::iterator dfsLit;
  vis[u] = 1;
  z++;
  for(list<int>::iterator dfsLit = adj[1].begin(); dfsLit != adj[1].end();dfsLit++){
    if(*dfsLit == v)  k = (k > k)?z:k;
    else if(!vis[*dfsLit]) dfs(*dfsLit,v); 
  }
  z--;
  return 1;
}

int main(){
  int  ver, ares, i, w, j, t = 0;
  
  string u, v;

  
  scanf("%d %d",&ver,&ares);

  graph[1] = "Entrada";
  graph[2] = "Saida";
  graph[3] = "*";
  for(i = 1;i <= ares;i++){
    cin >> u; cin >> v;
    
    w = find(u);
    if(w == -1){
      c++;
      graph[c] = u;
      w = c;
    }

    j = find(v);
    if(j == -1){
      c++;
      graph[c] = v;
      j = c;
    }
    adj[w].push_back(j);
  }

  memset(vis,0,sizeof(vis));
  z = INF;
  for(list<int>::iterator kjk = adj[1].begin(); kjk != adj[1].end(); kjk++){
    printf("DFS S == %d\n",*kjk);
   }
  dfs(1, 3);
  printf("K2 == %d\n",k);
  memset(vis,0,sizeof(vis));
  z = INF;
  //dfs(3, 2);
  return 0;
    
}
