#include <stdio.h>
#include <stdlib.h>

int main(){
  int  casos, i , m, o, area, x, y;
  
  scanf("%d",&casos);
  
  for(i = 0; i < casos; i++){
    scanf("%d %d",&x,&y);
    
    area = (x*y)/2; 

    printf("%d cm2\n",area); 
  }
  
  return 0;
}
