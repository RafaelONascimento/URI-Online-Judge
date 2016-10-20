#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n, i, j, tamanho, k;
  
  scanf("%d", &n);

  getchar();
  
  for(i = 0; i < n; i++){  
    char errada[110], certa[110];

    memset(certa, 0, sizeof(certa));
    fgets(errada, 110, stdin);
     errada[strlen(errada) - 1] = 0;
    tamanho = strlen(errada);

    for(j = tamanho / 2 - 1, k = 0; j >= 0; j--, k++){
      certa[k] = errada[j];
    }
    
    for(j = tamanho - 1; j >= tamanho / 2; j--, k++){
      certa[k] = errada[j];
    }
    
    printf("%s\n", certa);
  }
}
