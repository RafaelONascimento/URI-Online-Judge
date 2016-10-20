#include <stdio.h>
#include <stdlib.h>

int main(){
  int h, m;

  while(scanf("%d:%d",&h,&m) != EOF){
    int difH = 0, difM = 0;
    if(h <= 7){
      if(h == 7) difM = m;
    }
    else{
      difH = h - 7;
      difM = m;
    }
    printf("Atraso maximo: %d\n",(difH * 60)+difM);
  }
  return 0;
}
