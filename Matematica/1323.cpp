#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, soma;

  while(scanf("%d",&n),n){
    soma = 0;
    for(i = 1; i <= n; i++) soma += i*i;
    printf("%d\n",soma);
  }

  return 0;
}
