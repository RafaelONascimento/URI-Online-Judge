#include <stdio.h>
#include <stdlib.h>

int main(){
  int t, i, nota, r, flag;
  
  
  while(scanf("%d",&t),t){
    while(t--){
      flag= r = 0;
      for(i = 65; i <= 69; i++){
	scanf("%d",&nota);
	if(nota <= 127){
	  if(r) flag = 1;
	  else r = i;
	}
      }
      if(flag || !r) printf("*\n");
      else printf("%c\n",r);
    }
  }
  
  return 0;
}
