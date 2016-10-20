#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char text[1010];
  int n, i,open, len, flag;
  
  scanf("%d",&n);
  
  while(scanf("%s",text) != EOF){
    open = flag = 0; 
    len = strlen(text);

    for(i = 0; i <= len && !flag; i++){
      if(text[i] == '(') open++;
      else if(text[i] == ')'){
	if(open) open--;
	else flag = 1;
      }
    }
    if((open+flag)==0) printf("correct\n");
    else printf("incorrect\n");
  }
  return 0;
}
