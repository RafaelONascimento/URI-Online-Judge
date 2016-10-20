#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

typedef unsigned long llu;

int len(llu n){
  int i = (n == 0);
  while(n){
    i++;
    n /= 10;
  }
  return i;
}

int main(){
  int n ,tmp, l, i, j, tam[20], x = 4;
  llu matriz[20][20], v;
  
  scanf("%d",&n);
  
  while(n--){
    scanf("%d",&l);
    
    for(i = 0; i < l; i++){
      for(j = 0; j < l; j++){
	scanf("%llu",&v);
	matriz[i][j] = (v*v);
      }
    }

    memset(tam,0,sizeof(tam));
    for(i = 0; i < l; i++)
      for(j = 0; j < l; j++) tam[i] = max(tam[i],len(matriz[j][i]));
    
    printf("Quadrado da matriz #%d:\n",x);
    x++;

    for(i = 0; i < l; i++){
      for(j = 0; j < l; j++){
	if(j >0) printf(" "); 
	printf("%*llu",tam[j],matriz[i][j]);
      }
      printf("\n");
    }
    if(n > 0) printf("\n");
  }
  return 0;
}
