#include <stdio.h>
#include <stdlib.h>

int main(){
  int x, y, i = 1, diI, diF;

  scanf("%d %d",&x,&y);

  diI = y - x;
  diF = diI;

  while(diF < y){
    i++;
    diF += diI;
  }

  printf("%d\n",i);
}
