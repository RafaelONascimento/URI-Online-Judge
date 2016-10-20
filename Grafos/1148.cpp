#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <list>
#include <queue>
#include <string.h>

#define INF 999999
#define MAX 20000

using namespace std;

int v, dist[MAX], vis[MAX] , flag;

void addAresta(int u, int v, int custo, list<pair<int,int> > adj[]){
  adj[u].push_back(make_pair(v, custo));
}
  

int dijkstra(int orig, int dest, list<pair<int,int> > adj[]){
  priority_queue < pair<int, int>,
		   vector<pair<int, int> >, greater<pair<int, int> > > pq;
  
  for(int i = 0; i <= v; i++){
    dist[i] = INF;
    vis[i] = 0;
  }
  
  dist[orig] = 0;
  
  pq.push(make_pair(dist[orig], orig));

  while(!pq.empty()){
    pair<int, int> p = pq.top();
    flag = 0;
    int u = p.second;
    
    if(u == dest) break;
    
    pq.pop();
    
      if(!vis[u]){
	vis[u] = 1;
	list<pair<int, int> >::iterator it;
	
	for(it = adj[u].begin(); it != adj[u].end(); it++){
	  int o = it->first;
	  int custo = it->second;
	   
	  list<pair<int, int> >::iterator ij;
	  for(ij = adj[o].begin(), flag = 0; ij != adj[o].end() && !flag;ij++)
	    if(ij->first == u) flag = 1;

	  if(flag){
	    dist[o] = dist[u];
	    pq.push(make_pair(dist[o], o));
	  }
	  else if(dist[o] > (dist[u] + custo)){
	    dist[o] = dist[u] + custo;
	    pq.push(make_pair(dist[o], o));
	  }
	}
      }
  }
  
  return dist[dest];
}

int main(){
  int n, e, i, x,y ,h,r;

  while(scanf("%d %d",&n,&e), (n + e) >0) {
    list<pair<int, int> > adj[n*10];
    v = n;
    
    for(i = 0; i < e; i++){
      scanf("%d %d %d",&x,&y,&h);
      addAresta(x, y, h,adj);
    }
    
    scanf("%d",&n);
    for(i = 0; i < n; i++){
      scanf("%d %d",&x,&y);
      r = dijkstra(x,y,adj);
      if(r == INF) printf("Nao e possivel entregar a carta\n");
      else printf("%d\n",r);
      }
    
    printf("\n");
  }
  
  return 0;
}
