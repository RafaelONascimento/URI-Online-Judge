#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int N, i, tamanhoString, j, h;
  char M[10000], auxiliar;
  
  scanf("%d",&N);
  
  for(i = 0; i < N; i++){
    setbuf(stdin, NULL);
    scanf("%[^\n]",M);
    
    tamanhoString = strlen(M);
    
    for(j = 0; j < tamanhoString; j++)
      {
	if(islower(M[j]))
	  {
	    M[j] = (M[j] + 3);
	  }
	else if(isupper(M[j]))
	  {
	    M[j] = (M[j] + 3);
	  }
      }
    for(j = 0; j < tamanhoString/2; j++)
      {
	auxiliar = M[j];
	M[j] = M[tamanhoString-1-j];
	M[tamanhoString-1-j] = auxiliar;
      }
    
    for(j = (tamanhoString/2); j < tamanhoString; j++){
      M[j] = (M[j] - 1);
    }
    
    printf("%s\n",M);
  }
}
