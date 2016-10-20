#include <stdio.h>
#include <stdlib.h>

#define MAX 25

int main(){
  int banco[MAX], b, n , i, d, c ,v, flag;

  while(scanf("%d %d",&b,&n), (b+n)){
    flag = 0;
    for(i = 1; i <= b; i++) scanf("%d",&banco[i]);
    
    while(n--){
      scanf("%d %d %d",&d,&c,&v);

      banco[c] += v;
      banco[d] -= v;
    }
    
    for(i = 1; i <= b; i++) if(banco[i] < 0) flag = 1;
    
    if(flag) printf("N\n");
    else printf("S\n");	      
  }

  return 0;
  
}
