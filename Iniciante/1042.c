#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int menor, aux, i, j, tamanho = 3, min, max;
  int num[3], numeroOriginal[3];
  
  scanf("%d %d %d",&num[0],&num[1],&num[2]);
  
  for(i = 0; i < tamanho;i++){
    numeroOriginal[i] = num[i];
  }
  
  for (i = 0; i < (tamanho-1); i++) {
    min = i;
    for (j = (i+1); j < tamanho; j++) {
      if(num[j] < num[min]) {
        min = j;
      }
    }
    if (i != min) {
      aux = num[i];
      num[i] = num[min];
      num[min] = aux;
    }
  }

  for(i = 0; i < tamanho;i++){
    printf("%d\n",num[i]);
    
    if(i == 2){
      printf("\n");
    }
  }
  
  for(i = 0; i < tamanho;i++){
    printf("%d\n",numeroOriginal[i]);
  }

  return 0;
}
