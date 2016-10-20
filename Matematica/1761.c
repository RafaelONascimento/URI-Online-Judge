#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654


int main(){
  double a, b, c, tmp, angel, ans;
  
  while(scanf("%lf %lf %lf",&a,&b,&c) != EOF){
    angel = tan(a * PI / 180.0);
    tmp = angel * b;
    ans = tmp + c;
    printf("%.2lf\n",ans*5);
  }

  return 0;
}
