#include <stdio.h>
#include <stdlib.h>

#define MAX 11234

int main()
{
  int n , x, i, array[MAX];
  
  while(scanf("%d", &n), n){
    x = 0;
    for(i = 0; i < n; i++){
      scanf("%d", &array[i]);
    }
    
    for(i = 0; i < n; i++){
      if(array[i] < array[(i + 1)%n])
	if(array[(i + 1)%n] > array[(i + 2)%n]) x++;
      
      if(array[i] > array[(i + 1)%n])
	if(array[(i + 1)%n] < array[(i + 2)%n]) x++;
    }
    printf("%d\n", x);
  }
  
  return 0;
	
}
