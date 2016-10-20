#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
  int n , i, a, b, resultado;
  char letra;

  scanf("%d",&n);
  
  for(i = 0; i < n; i++){
    scanf("%d%c%d",&a,&letra,&b);
    setbuf(stdin,NULL);

    if(a == b) resultado = a*b;
    else if(isupper(letra)) resultado = b - a;
    else if(islower(letra)) resultado = a+b;
     
    printf("%d\n",resultado);
  }

  return 0;
}
