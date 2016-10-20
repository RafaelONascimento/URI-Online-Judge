#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int casos, integrantes, i, j;
  
  scanf("%d",&casos);
  
  for(j = 1; j <= casos; j++){
    scanf("%d",&integrantes);

    int idades[integrantes];

    for(i = 0; i < integrantes; i++){
      scanf("%d",&idades[i]);
    }
    
    qsort(idades, integrantes, sizeof(int),comparacao);

    printf("Case %d: %d\n",j,idades[(integrantes/2)]);
  }

  return 0;
}
