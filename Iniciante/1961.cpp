#include <cstdio>
#include <cstdlib>

int main(){
  int i,flag = 0, m,j, n , p;

  scanf("%d %d",&p,&n);
  scanf("%d",&m);
  scanf("%d",&j);
  if(abs(m-j) > p) flag = 1;
  for(i = 2; i<n && !flag; i=i+2){
    scanf("%d",&m);
    if(abs(m-j) > p) flag = 1;
    scanf("%d",&j);
    if(abs(m-j) > p) flag = 1;
  }

  if(flag) printf("GAME OVER\n");
  else printf("YOU WIN\n");

  return 0;
}
