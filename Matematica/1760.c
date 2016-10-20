#include <stdio.h>
#include <math.h>

int main(){
  int l;
  while(scanf("%d",&l) == 1)
    printf("%.2lf\n", ((8 * ((l * l * sqrt(3))/2))/5)/2);
  
  return 0;
}
