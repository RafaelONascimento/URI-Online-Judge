#include <stdio.h>
#include <stdlib.h>

#define MAX 60

int main(){
  int c ,height[MAX], t , i, counter;
  char command[MAX];
  
  scanf("%d",&c);

  while(c--){
    counter = 0;
    scanf("%d",&t);

    for(i = 0; i < t; i++) scanf("%d",&height[i]);
    getchar();
    fgets(command,MAX,stdin);

    for(i = 0; i < t; i++){
      if(height[i] > 2 && command[i] == 'J') counter++;
      else if(height[i] <= 2 && command[i] == 'S') counter++;
    }

    printf("%d\n",counter);
  }

  return 0;
}
