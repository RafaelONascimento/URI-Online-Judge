#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int t, n;
  float j;
  
  scanf("%d",&t);

  while(t--){
    scanf("%f",&j);
    j = j/2;
    printf("%.0f\n",ceil(j));
  }

  return 0;
}
