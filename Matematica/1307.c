#include <stdio.h>
#include <stdlib.h>

unsigned long long binToDec(unsigned long long n){
  unsigned long long i = 1, soma = 0;
  
  while(n){
    if((n%10) == 1){
      soma += i;
    }
    n = n/10;
    i += i;
  }
  return soma;
}

unsigned long long mdc(unsigned long long a, unsigned long long b){
  if(b == 0){
    return a;
  }
  else{
    return mdc(b,a%b);
  }
}

int main(){
  unsigned long long l, s, a;
  int i, n;
  scanf("%d",&n);

  for(i = 1; i <= n; i++){
    scanf("%llu",&l);
    scanf("%llu",&s);
    a = mdc(binToDec(l),binToDec(s));
    printf("Pair #%d: %s!\n",i,((a>1)?"All you need is love":"Love is not all you need"));
  }
  
  return 0;
}
