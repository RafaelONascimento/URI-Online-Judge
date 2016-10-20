#include <stdio.h>
#include <stdlib.h>

char mapa[120][120];

int verificaMapa(int i, int j){
  int op = 7; 
  
  if(mapa[i][j] == '>') op = 1;
  else if(mapa[i][j] == '<') op = 2;
  else if(mapa[i][j] == '^') op = 3;
  else if(mapa[i][j] == 'v') op = 4;
  else if(mapa[i][j] == '*') op = 5;
  else if (mapa[i][j] == '1') op = 6;

  mapa[i][j] = '1';

  return op;
}

int main(){
  int x,y, i, j, flag = 0, op= 0 , m, n, k = 0;
 
  
  scanf("%d %d",&x,&y);

  for(i = 1; i <= y; i++){
    getchar();
    for(j = 1; j <= x; j++){
      scanf("%c",&mapa[i][j]);
      if(!op){
	if(mapa[i][j] == '>') op = 1;
	else if(mapa[i][j] == '<') op = 2;
	else if(mapa[i][j] == '^') op = 3;
	else if(mapa[i][j] == 'v') op = 4;
	
	if(op){
	  m = i;
	  n = j;
        }
      }
    }
  }
  printf("%c",mapa[m][n]);
  
  while(!flag){
    if(op == 1){
      if(n == x){
	flag = 2;
	break;
      }
      else n++;
    }
    else if(op == 2){
      if(n == 1){
	flag = 2;
	break;
      }
      else n--;
    }
    else if(op == 3){
      if(m == y){
	flag = 2;
	break;
      }
      else m--;
    }
    else if(op == 4){
      if(m == x){
	flag = 2;
	break;
      }
      else m++;
    }
    k = verificaMapa(m,n);
    printf("%c",mapa[m][n]);
    if(k <= 4) op = k;
    else if(k == 5) flag = 1;
    else if(k>= 6 && n == x && op == 1) flag = 2;
    else if(k>= 6 && m == y && op == 4) flag = 2;
    else if(k>= 6 && n == 1 && op == 2) flag = 2;
    else if(k >= 6 && m == 1 && op == 3) flag = 2;
    
    if(flag) break;
  }
  printf("%c\n",(flag == 1)?'*':'!');
  
  return 0;
}
