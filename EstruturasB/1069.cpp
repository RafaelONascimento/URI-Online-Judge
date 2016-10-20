#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char text[1010];
  int n, i,d,open, close, len;
  
  scanf("%d",&n);
  
  while(n--){
   open = d = 0; 
    scanf("%s",text);
    len = strlen(text);

    for(i = 0; i <= len; i++){
      if(text[i] == '<') open++;
      else if(text[i] == '>'){
	if(open){
	  open--;
	  d++;
	}
      }
    }
    printf("%d\n",d);
  }
  return 0;
}
