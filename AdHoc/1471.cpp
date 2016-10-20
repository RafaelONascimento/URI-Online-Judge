#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11234

int main(){
  int n, r, vis[MAX], t, i,flag;

  while(scanf("%d %d",&n,&r) != EOF){
    memset(vis,0,sizeof(vis));
    while(r--){
      scanf("%d",&t);
      vis[t] = 1;
    }

    for(i = 1, flag = 0; i <= n; i++){
      if(!vis[i]){
	if(!flag) flag = 1;
	printf("%d ",i);
      }
    }
    
    if(!flag) printf("*");
    
    printf("\n");
  }

  return 0;
}
