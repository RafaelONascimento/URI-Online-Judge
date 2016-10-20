#include <stdlib.h>
#include <stdio.h>

int main(){
  int j, i, l, m,n,p = 0,qtd = 0;
  while(scanf("%d %d",&n,&m) != EOF){
    qtd = 0;
    for(i = 0; i < n; i++){
      p = 0;
      for(j = 0; j < m; j++){
	scanf("%d",&l);
	if(l > 0) p++;
      }
      if(p == m) qtd++;
    }
    printf("%d\n",qtd);
  }
  return 0;
}
