#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int n, i;
  char a[10], b[10];
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++){
      scanf("%s %s", a, b);
      
      if(strcmp(a, b) == 0)
	printf("Caso #%d: De novo!\n", i);
      else{
	if(strcmp(a, "pedra") == 0)
	  if(strcmp(b, "papel") == 0 || strcmp(b, "Spock") == 0)
	    printf("Caso #%d: Raj trapaceou!\n", i);
	  else
	    printf("Caso #%d: Bazinga!\n", i);
 	else if(strcmp(a, "papel") == 0)
	  if(strcmp(b, "tesoura") == 0 || strcmp(b, "lagarto") == 0)
	    printf("Caso #%d: Raj trapaceou!\n", i);
	  else
	    printf("Caso #%d: Bazinga!\n", i);
	
	else if(strcmp(a, "tesoura") == 0)
	  if(strcmp(b, "Spock") == 0 || strcmp(b, "pedra") == 0)
	    printf("Caso #%d: Raj trapaceou!\n", i);
	  else
	    printf("Caso #%d: Bazinga!\n", i);
	
	else if(strcmp(a, "lagarto") == 0)
	  if(strcmp(b, "tesoura") == 0 || strcmp(b, "pedra") == 0)
	    printf("Caso #%d: Raj trapaceou!\n", i);
	  else
	    printf("Caso #%d: Bazinga!\n", i);
	
	else if(strcmp(a, "Spock") == 0)
	  if(strcmp(b, "lagarto") == 0 || strcmp(b, "papel") == 0)
	    printf("Caso #%d: Raj trapaceou!\n", i);
	  else
	    printf("Caso #%d: Bazinga!\n", i);
      }
  }
}
