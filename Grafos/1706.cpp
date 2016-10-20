#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 1123
#define MAXV 4123

char nota[MAX];
int lg[MAXV][MAXV], gs[MAX];

void dfs(int u){
  //int i;

  /* for(i = 1; i <= gs[u] && nota[u] != 'A'; i++)
    if(lg[u][i] == 'B') nota[i] = nota [u] = 'A';
  */
  return;
}


int main(){
  int n, m, i, u ,v, flag;
  
  while(scanf("%d %d",&n,&m) != EOF){
    memset(gs,0,sizeof(gs));
    getchar();
    
    
    for(i = 1; i <= n; i++){
      scanf("%c",&nota[i]);
      getchar();
    }
    for(i = 1; i <= m; i++){
      scanf("%d %d",&u,&v);
      lg[u][gs[u]++] = v;
      lg[v][gs[v]++] = u;
    }
   
    for(i = 1; i <= n; i++){
      if(nota[i] == 'B') {
	for(int k = 0; k < gs[u] && nota[k] != 'A'; k++){
	  if(nota[lg[i][k]] == 'B'){
	    nota[lg[i][k]];
	    nota[i] = 'A';
	  }
	}
      }
    }
    
    flag = 1;
    
    for(i = 1; i <= n && flag; i++){
      if(nota[i] == 'B'){
	flag = 0;
      }
    }
    
      
    printf("%c\n",(flag)?'Y':'N');
  }

  return 0;
}
