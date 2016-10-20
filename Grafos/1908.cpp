#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <string.h>
#include <utility>
#include <vector>

using namespace std;

#define MAXV 11234
#define MAXA 1123
#define INF 112345678

typedef pair<int, int>ii;
typedef vector<ii> vii;

vii adj[MAXV];
queue caminho;

int custo, la = 0;

void dfs(int u){
  int m;
  
  vii::iterator it;
  for(it = adj[u].begin(); it != adj[u].end(); it++){
    m = caminho.top();
    if(m != it->second) caminho.push(it->second);
    dfs(it->first);
  }
}

int main(){
  int n, k, i, c, j, l, r;
  
  scanf("%d %d",&n,&k);
  
  for(i = 1; i <= k; i++){
    scanf("%d %d",&c,&l);
    for(j = 1; j < c; j++){
      scanf("%d",&r);
      adj[l].push_back(ii(r,i));
      l = r;
    }
  }

  custo = INF;
  
  dfs(1);
 
  printf("%d\n",custo); 
  
  return 0;
}
