#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int a, b, c, paginas;
  double diferenca;
  
  while(scanf("%d",&a), a != 0){
    scanf("%d %d",&b,&c);
    
    diferenca = (double)(a*b)/(abs(a-c));
    paginas = ((diferenca+b)*a);
    
    if(paginas == 1) printf("%d pagina\n",paginas);
    else printf("%d paginas\n",paginas);	
  }
  
  return 0;
}
