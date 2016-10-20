#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long llu;

llu fib[200], thFib[65], k ,j;
int c = 1, i,flag;

void calculaThreeFib(){
  for(i = 2; c != 61; i++){
    flag = 0;
    fib[i] = fib[i-1]+fib[i-2];

    if((fib[i]%3)==0){
      thFib[c] = fib[i];
      c++;
    }
    else{
      j = fib[i];
      while(j && !flag){
	k = j%10;
	j = j/10;
	if(k == 3) flag = 1;
      }
      if(flag){
	thFib[c] = fib[i];
	c++;
      }
    }
  }
}

int main(){
  int t;
  
  fib[0] = 0;
  fib[1] = 1;
  
  calculaThreeFib();

  while(scanf("%d",&t) != EOF) printf("%llu\n",thFib[t]);

  return 0;
}
