#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned long long ll;

ll potencia2(ll n){
  ll r = 1;
  if(n == 64){
    return 1537228672809129;
  }

  while(n--){
    r *= 2;
  }
  return r/12000;
}

int main(){
  ll qtd, j;
  int casos;
  
  scanf("%d",&casos);

  while(casos--){
    scanf("%llu",&j);
    qtd = potencia2(j);
    printf("%llu kg\n",qtd);
  }

  return 0;
}

