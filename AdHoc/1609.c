#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n, t , i, posicao, j, flag;
  
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    posicao = 0;
    flag = 0;
    long int carneiro[n], distintos[n];
    //   memset(distintos,(-1),sizeof(long int));
    for(i = 0; i < n; i++){
      scanf("%ld",&carneiro[i]);
    }

    for(i = 0; i < n; i++){
      for(j = 0; j <= posicao; j++){
	if(carneiro[i] == distintos[j]){
	  flag = 1;
	}
      }
      if(flag == 0){
	distintos[posicao] = carneiro[i];
	posicao++;
      }
    }
    printf("%d\n",posicao);
  }
  return 0;
}
