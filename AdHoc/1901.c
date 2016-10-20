#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i,j, flag;

  scanf("%d",&n);
  
  int vetor[n][n], especies[n*n], qtdEspecies = 0, x ,y;

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&vetor[i][j]);
    }
  }
  
  for(i= 0; i < (n*2); i++){
     scanf("%d %d",&x,&y);

      for(j = 0, flag = 0; j < qtdEspecies; j++){
	if(especies[j] == vetor[x-1][y-1]){
	  flag = 1;
	}
      }

      if(flag == 0){
	qtdEspecies++;
	especies[qtdEspecies-1] = vetor[x-1][y-1];
      }
  }
  
  printf("%d\n",(qtdEspecies));
  return 0;
}
