#include <stdio.h>
#include <queue>

using namespace std;

int main(void){
  queue<int> fila;
  int n, i;

  while(scanf("%d",&n), n){
    for(i = 1; i <= n; i++){
      fila.push(i);
    }
    printf("Discarded cards: ");
    
    while(fila.size() != 1){
      printf("%d",fila.front());
      fila.pop();
      fila.push(fila.front());
      fila.pop();
      if(fila.size() != 1)
	printf(", ");
      else
        putchar('\n');
    }
    printf("Remaining card: %d\n",fila.front());
    
    while(!fila.empty()){
      fila.pop();
    }
  }
  return 0;
}
