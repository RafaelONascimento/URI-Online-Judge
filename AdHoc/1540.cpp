#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int t,difAno;
  double difTx,a,b,c,d;
  long int final, i, j;
  
  scanf("%d",&t);

  while(t--){
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    difAno = c - a;
    difTx = (d-b);
    difTx = difTx/difAno;
    final = difTx*100.0;
    i = final%10;
    final = final/10;
    j =  (final%10);
    final = final/10;
    
    printf("%ld,%ld%ld\n",final,j,i);
   
  }
  return 0;
}
