#include <stdio.h>
#include <string.h>

int main(){
  int matriz[9][9], flags[10], i, j,k,w,casos, flagG = 0;
  
  scanf("%d",&casos);
 
  for(w = 1; w <= casos; flagG = 0,w++){
    for(i = 0; i < 9; i++)
      for(j = 0; j < 9; j++) scanf("%d",&matriz[i][j]);
    
    for(i = 0 ; i < 9 && !flagG; i++){
      memset(flags,0,sizeof(flags));
      
      for(j = 0; j < 9 && !flagG; j++){
	if(flags[matriz[i][j]]) flagG = 1;
	else flags[matriz[i][j]] = 1;
      }
    }
    
    for(i = 0; i < 9 && !flagG; i++){
      memset(flags,0,sizeof(flags));
      for(j = 0; j < 9 && !flagG; j++){
	if(flags[matriz[j][i]]) flagG = 1;
	else flags[matriz[j][i]] = 1;
      }
    }
    
    for(i = 2; i < 9 && !flagG; i+=3){
      memset(flags,0,sizeof(flags));
      for(j = i-2; j <= i && !flagG; j++){
	for(k = i-2; k <= i && !flagG; k++){
	  if(flags[matriz[j][k]]) flagG = 1;
	  else flags[matriz[j][k]] = 1;
	}
      }
    }
    printf("Instancia %d\n%s\n\n",w,(!flagG)?"SIM":"NAO");
  }
  return 0; 
}
