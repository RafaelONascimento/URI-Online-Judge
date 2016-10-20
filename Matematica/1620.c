#include <stdio.h>
#include <stdlib.h>

int main(){
  long double l, m;
  
  while(scanf("%Lf",&l),l != 0)
    printf("%.6Lf\n",((l-3.0)/l));
  
  return 0;
}
