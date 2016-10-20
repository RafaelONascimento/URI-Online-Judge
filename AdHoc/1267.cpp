#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, d, alunoA , soma, j, i, h;
  
  while(scanf("%d %d",&n,&d), (n+d)){
    alunoA = 0;
    for(i = 0 ; i < n; i++){
      soma = 0;
      for(j = 0;  j < d; j++){
	scanf("%d",&h);
	soma += h;
      }
      if(soma == d) alunoA++;
    }
    
    if(alunoA != 0) printf("yes\n");
    else printf("no\n");
  }
  return 0;
}

