#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <list>
#include <queue>
#include <string.h>

#define INF 1000000
#define MAX 11234

using namespace std;


list<pair<int,int> > adj[MAX];
list<pair<int,int> > adjTmp[MAX];

int n, dist[MAX], vis[MAX];

void addAresta(int u, int v, int custo){
  adj[u].push_back(make_pair(v, custo));
}

void addArestaTmp(int u, int v, int custo){
  adjTmp[u].push_back(make_pair(v, custo));
}


int dijkstra(int orig, int dest){
  priority_queue < pair<int, int>,
		   vector<pair<int, int> >, greater<pair<int, int> > > pq;
  for(int i = 1; i <= n; i++){
    dist[i] = INF;
    vis[i] = 0;
  }
  dist[orig] = 0;
  
  pq.push(make_pair(dist[orig], orig));
  
  while(!pq.empty()){
    pair<int, int> p = pq.top();
    int u = p.second; 
    pq.pop();
    if(!vis[u]){
      vis[u] = 1;
      
      list<pair<int, int> >::iterator it;
      
      for(it = adj[u].begin(); it != adj[u].end(); it++){
	int o = it->first;
	int custo = it->second;
	if((dist[o] > (dist[u] + custo))){
	  dist[o] = dist[u] + custo;
	  pq.push(make_pair(dist[o], o));
	}
      }
    }
  }
  return dist[dest];
}


int main(){
  int m, u, v,w, i ,a, b, c,flag;
   
  scanf("%d %d",&n,&m);

  for(i = 0; i < m; i++){
    scanf("%d %d %d",&u,&v,&w);
    addArestaTmp(u,v,w);
    addArestaTmp(u,v,w);	
  }
  
  list<pair<int, int> >::iterator it , ij;
  
  for(i = 1; i <= n; i++){
    for(it = adjTmp[i].begin(); it != adjTmp[i].end(); it++){
      a = it->first;
      b = it->second;
      
      for(ij = adjTmp[a].begin(), flag = 0; ij != adjTmp[a].end(); ij++){
	if(ij->first != i){
	  addAresta(i,ij->first,(b+ij->second));
	  flag = 1;
	}
      }
      //  if(!flag) addAresta(i,a,b);
    }
  }
  v = dijkstra(1,n);
  printf("%d\n",(v==INF)?-1:v);
  return 0;
}
