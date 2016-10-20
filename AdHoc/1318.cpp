#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20010

int main(){
  int tk[MAX] , n, m, count, i;

  while(scanf("%d %d",&n,&m), (n+m)){
    memset(tk,0,sizeof(tk));
    count = 0;
      
    while(m--){
      scanf("%d",&i);
      if(tk[i] == 1){
	count++;
	tk[i]++;
      }
      else tk[i]++;
    }
    printf("%d\n",count);
  }

  return 0;
}
