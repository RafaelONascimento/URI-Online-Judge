#include <stdio.h>
#include <stdlib.h>

int main(){
  double a, b, c;
  scanf("%lf %lf",&a,&b);
  c = (b-a)/(a/100);
  printf("%.2lf%%\n",c);
  return 0;
}
