#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long llu;

int main(){
  int n;
  llu m, sum;
  
  while(scanf("%d %llu",&n,&m) != EOF){
    sum = 0;
    while(m){
      sum += m%10;
      m = m/10;
    }

    if(!(sum%n)) printf("%llu sim\n",sum);
    else printf("%llu nao\n",sum);
  }

  return 0;
}
