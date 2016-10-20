#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
  double A, B, C, delta , x1, x2;
  
  scanf("%lf %lf %lf",&A,&B,&C);
  
  delta = ((B * B) -4*A*C);
  
  if(delta >= 0){
    x1= ((B * -1) + sqrt(delta));
    x2= ((B * -1) - sqrt(delta));
    
    if((x2 != 0) && (x1 != 0)){
      x2 = (x2 / (A * 2));
      x1 = (x1 / (A * 2));
      
      printf("R1 = %.5lf\n",x1);
      printf("R2 = %.5lf\n",x2);
    }
    else{
      printf("Impossivel calcular\n");
    }  
  }
  else{
    printf("Impossivel calcular\n");
  }
  
  return 0;
}
