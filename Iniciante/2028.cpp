#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,j,c = 1, k, l;

  while(scanf("%d",&n) != EOF){
    k = n;
    l= 1;
    while(k){
      l += k;
      k--;
    }
    printf("Caso %d: %d %s\n",c,l,((l>1)?"numeros":"numero"));
    printf("0");
    for(int i = 1; i <= n; i++){
      j = i;
      while(j){
	printf(" %d",i);
	j--;
      }
    }
    printf("\n\n");
    c++;
  }
  
  return 0;
}
