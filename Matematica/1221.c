#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int n, i,numero, x, flag;
  
  scanf("%d",&n);

  while(n--){
    scanf("%d",&numero);

    flag = 0;

    if(numero == 0 || numero == 1){
      printf("Not Prime\n");
      break;
    }
    x = sqrt(numero);
    for(i = 2; i <= x; i++){
      if((numero%i) == 0){
	flag = 1;
	break;
      }
    }
    printf("%s\n",(flag==0)?"Prime":"Not Prime");
  }
  return 0;
}
