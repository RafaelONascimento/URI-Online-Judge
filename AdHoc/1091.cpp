
#include <stdio.h>
#include <stdlib.h>

int main(){
  int k, n, m, x, y;
  
  while(scanf("%d",&k) && k != 0){
    scanf("%d %d",&n,&m);
    
    for (int i = 0; i < k; ++i){
      scanf("%d %d",&x,&y);
      
      if((x == n || x == m) || (y == n || y == m)){
	printf("divisa\n");
      }
      else{
	if(x > n && y > m) printf("NE\n");
	else if(x > n && y < m) printf("SE\n");
	else if(x < n && y > m) printf("NO\n");
	else printf("SO\n");
      }
    }
  }
  
  return 0;
}
