#include <stdlib.h>
#include <stdio.h>

int main(){
  int t, i, a, FA = 0;
  
  scanf("%d",&t);

  for(i = 0; i < 5; i++){
    scanf("%d",&a);
    if(a == t) FA++;
  }
  
  printf("%d\n",FA);

  return 0;
}
