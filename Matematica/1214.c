#include <stdio.h>
#include <stdlib.h>

int main(){
  int casos,nota, notas[1000], i, qtdAM , qtdAlunos;
  float soma;
  scanf("%d",&casos);

  while(casos--){
    soma = 0;
    qtdAM = 0;
    
    scanf("%d",&qtdAlunos);
    
    for(i = 0; i < qtdAlunos; i++){
      scanf("%d",&nota);
      notas[i] = nota;
      soma += nota;
    }
    soma /= qtdAlunos;
    for(i = 0; i < qtdAlunos; i++){
      if(notas[i] > soma){
	qtdAM++;
      }
    }
    printf("%.3lf%%\n",((100.0/qtdAlunos)*qtdAM));
  }
  
  return 0;
}
