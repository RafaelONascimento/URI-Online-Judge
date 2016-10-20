#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i, j , n, limite;

  while(scanf("%d",&n) != EOF){
    limite = sqrt(n);
    int flag = 0;
    for(i = 0; i <= limite && !flag; i++){
      for(j = 0; j <= limite && !flag; j++){
	if((i*i + j*j) == n) flag = 1;
      }
    }
    printf("%s\n",(flag)?"YES":"NO");
  }
  return 0;
}
