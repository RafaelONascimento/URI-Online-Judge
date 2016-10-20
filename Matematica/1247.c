#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int d, vf, vg, tw = 12;
  
  double tf, tg, x;

  while(scanf("%d %d %d",&d,&vf,&vg) != EOF){
    x = (double)sqrt(tw*tw+(d*d));
    tf = (double)tw/vf;
    tg = (double)(x/vg);

    printf("%s\n",((tg>tf)?"N":"S"));
  }

  return 0;
}
