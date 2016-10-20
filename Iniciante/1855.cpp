#include <stdio.h>
#include <stdlib.h>

char mapa[120][120];
//int mapa[120][120];

int main(){
  int x,y, i, j, flag = 0, op= 0 , m, n, k = 0;
  
  scanf("%d %d",&x,&y);
  //  getchar();

  for(i = 1; i <= y; i++){
    getchar();
    for(j = 1; j <= x; j++){
      scanf("%c",&mapa[i][j]);
    }
  }
  
  for(i = 1; i <= y; i++){
    for(j = 1; j <= x; j++){
      printf("%c",mapa[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
