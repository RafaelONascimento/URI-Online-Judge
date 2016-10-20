#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparacao(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int n;
  
  scanf("%d",&n);
  
  int numero[n], numeroDif[n], qtd, i, j, flag = 0, posicao = 0;

  memset(numeroDif,9999,sizeof(numeroDif));
  
  for(i = 0; i < n; i++) scanf("%d",&numero[i]);

  for(i = 0; i < n; i++){
    flag = 0;
    for(j = 0; j <n ;j++)
      if(numeroDif[j] == numero[i]) flag = 1;
    
    if(flag == 0 && numero[i] >= 1 && numero[i] <= 2000){
      numeroDif[posicao] = numero[i];
      posicao++;
    }
  }
  
  qsort(numeroDif,n,sizeof(int),comparacao);
  
  for(i = 0; i < posicao; i++){
    qtd = 0;
    for(j = 0; j <n ;j++)
      if(numeroDif[i] == numero[j]) qtd++;
    
    printf("%d aparece %d vez(es)\n",numeroDif[i],qtd);
    
  }
  
  return 0;
}
