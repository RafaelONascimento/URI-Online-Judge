#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a,n,v, b, flag = 0, casos; 
  
  scanf("%d",&casos);

  while(casos--){
    scanf("%d %d",&a,&b);
    
    v = b;
    n = a;
    while(v){
      if((v%10) == (n%10)){
	flag = 1;
      }
      else{
	v = 0;
	flag = 0;
	break;
      }
      
      v = (v/10);
      n = (n/10);
    }
    
    printf("%s\n",(flag)?"encaixa":"nao encaixa");
  }

  return 0;
}
