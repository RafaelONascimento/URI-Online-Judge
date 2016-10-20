#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <list>
#include <queue>
#include <string.h>
 
#define INF 10000000
#define MAX 1123456
 
using namespace std;
 
 
list<pair<int,int> > adj[MAX];
int v,l, dist[MAX], vis[MAX], e, h;


void addAresta(int u, int v, int custo, char c){
  if(c != '#') adj[u].push_back(make_pair(v, custo));
}


int dijkstra(int orig, int dest){
  priority_queue < pair<int, int>,
		   vector<pair<int, int> >, greater<pair<int, int> > > pq;
  
  for(int i = 1; i <= (v*l); i++){
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
	
	if(dist[o] > (dist[u] + custo)){
	  dist[o] = dist[u] + custo;
	  pq.push(make_pair(dist[o], o));
	}
      }
    }
  }
  
  return dist[dest];
}

int verifPeso(char c, int i){;
  int peso = -1;
  if(c == 'E'){
    peso = 0;
    e = i;
  }
  else if(c == 'H'){
    peso = 0;
    h = i;
  }
  else if(c == '.') peso = 0;
  else if(c >= 48 && c <= 57) peso = c-48;
  
  return peso;
}

int main(){
  int i,j,k,peso,o = 0,x,y,z,p;
  char c;
  
  scanf("%d %d",&v,&l);
  getchar();
  char matrix[v+1][l+1];
  for(i = 1; i <= v; i++){
    for(j = 1; j <= l; j++) scanf("%c",&matrix[i][j]);
    getchar();
  }  
  
  
  for(i = 1; i <= v; i++){
    for(j = 1; j <= l; j++){
      o++;
      peso = verifPeso(matrix[i][j],o);
      
      if(peso!=-1){
	if(i==1 && j==1){
	  addAresta(1,2,peso,matrix[i][j+1]);
	  addAresta(1,(1+l),peso,matrix[i+1][j]);
	}
	else if(i==1 && j == l){
	  addAresta(o,o-1,peso,matrix[i][j-1]);
	  if(v > 1) addAresta(o,(o+l),peso,matrix[i+1][j]);
	}
	else if(i==v && j == 1){
	  addAresta(o, o-l, peso,matrix[i+1][j]);
	  addAresta(o, o+1,peso,matrix[i][j+1]);
	}
	else if(i == v && j == l){
	  addAresta(o, o-1,peso,matrix[i][j-1]);
	  addAresta(o, o-l, peso,matrix[i+1][j]);
	}
	else if(i ==1){
	  addAresta(o,o-1,peso,matrix[i][j-1]);
	  addAresta(o,o+1,peso,matrix[i][j+1]);
	  addAresta(o,o+l,peso,matrix[i+1][j]);
	}
	else if(i ==v){
	  addAresta(o,o-1,peso,matrix[i][j-1]);
	  addAresta(o,o+1,peso,matrix[i][j+1]);
	  addAresta(o,o-l,peso,matrix[i-1][j]);
	}
	else if(j == 1){
	  addAresta(o,o+l,peso,matrix[i+1][j]);
	  addAresta(o,o+1,peso,matrix[i][j+1]);
	  addAresta(o,o-l,peso,matrix[i-1][j]);
	}
	else if(j == l){
	  addAresta(o,o+l,peso,matrix[i+1][j]);
	  addAresta(o,o-1,peso,matrix[i][j-1]);
	  addAresta(o,o-l,peso,matrix[i-1][j]);
	}
	else{
	  addAresta(o,o+l,peso,matrix[i+1][j]);
	  addAresta(o,o-1,peso,matrix[i][j-1]);
	  addAresta(o,o+1,peso,matrix[i][j+1]);
	  addAresta(o,o-l,peso,matrix[i-1][j]);
	}
      }
    }
  }
  
  peso = dijkstra(e,h);
  if(peso == INF) printf("ARTSKJID\n");
  else printf("%d\n",peso);
  
  return 0;
}
