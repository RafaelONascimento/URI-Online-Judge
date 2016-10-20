#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1123

char cenario[MAX][MAX];
int n , m;

int dfs(int i, int j){
  cenario[i][j] = 'o';

  if(cenario[i+1][j] == '.') dfs(i+1,j);
  if(cenario[i-1][j] == '.') dfs(i-1,j);
  if(cenario[i][j+1] == '.') dfs(i,j+1);
  if(cenario[i][j-1] == '.') dfs(i,j-1);

  return 0;
}

int main(){
  int i, j, comp = 0;
  
  scanf("%d %d",&n,&m);
  getchar();

  memset(cenario,'o',sizeof(cenario));
  
  for(i= 0; i < n; i++){
    for(j = 0; j < m; j++)
      scanf("%c",&cenario[i][j]);
    getchar();
  }

   for(i= 0; i < n; i++){
     for(j = 0; j < m; j++){
       if(cenario[i][j] == '.'){
	 dfs(i,j);
	 comp++;
       }
     }
  }
  
   printf("%d\n",comp);
  return 0;
}
