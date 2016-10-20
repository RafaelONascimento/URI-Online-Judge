#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 112

int main(){
  int n, m, pro[MAX], equi[MAX], i ,j, r, f,flagA, flagB;
 
  while(scanf("%d %d",&n,&m),n || m ){
    f = 4;   
    memset(pro,0,sizeof(pro));
    memset(equi,0,sizeof(equi));

    for(i = 0; i < n; i++){
      for(j=0; j < m; j++){
	scanf("%d",&r);
	if(r){
	  pro[j]++;
	  equi[i]++;
	}
      }
    }
    
    for(i = 0, flagA = 0, flagB = 0; i < n && (flagA+flagB) != 2 ; i++){
      if(equi[i] == m) flagA = 1;
      if(!equi[i]) flagB = 1;
    }
    
    f -= (flagA+flagB);
    
    for(i = 0, flagA = 0, flagB = 0; i < m && (flagA+flagB) != 2 ; i++){
      if(!pro[i]) flagA = 1;
      if(pro[i] == n) flagB = 1;
    }

    f -= (flagA+flagB);

    printf("%d\n",f);
  }

  return 0;
}
