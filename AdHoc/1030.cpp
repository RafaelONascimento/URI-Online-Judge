#include <stdio.h>
#include <stdlib.h>

int josephus(int n,int k)
{
  if(n==1) return 1;
  else return (josephus(n-1,k)+k-1)%n+1;
}

int main(){
  int nc, n, k, i;

  scanf("%d",&nc);
  
  for(i = 1; i <= nc; i++){
    scanf("%d %d",&n,&k);
    printf("Case %d: %d\n",i,josephus(n,k));
  }

  return 0;
}

