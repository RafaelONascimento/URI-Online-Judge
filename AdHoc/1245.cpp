#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <string.h>

using namespace std;

#define MAX 11234

int main(){
  int right[MAX], left[MAX], j, t, count, v;
  queue<int> tam;
  char side;
  
  while(scanf("%d",&j) != EOF){
    count = 0;
    memset(right,0,sizeof(right));
    memset(left,0,sizeof(left));

    while(j--){
      scanf("%d",&t);
      getchar();
      scanf("%c",&side);

      tam.push(t);
      
      if(side == 'D') right[t]++;
      else if(side == 'E') left[t]++;
    }

    while(!tam.empty()){
      t = tam.front();

      if(right[t] && left[t]){
	if(right[t] > left[t]) count += left[t];	  
	else count += right[t];

	right[t] = left[t] = 0;
      }

      tam.pop();
    }

    printf("%d\n",count);
  }

  return 0;
  
}
