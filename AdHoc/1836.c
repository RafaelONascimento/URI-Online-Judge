#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int n, i , b, eV, lV, l, resultado, hp, at, df, sp;
  char nome[90];

  scanf("%d",&n);
  
  for(i = 1; i <= n; i++){
    scanf("%s %d",nome,&l);
    scanf("%d %d %d",&b,&lV,&eV);
    hp = (((lV + b + sqrt(eV) / 8 + 50) * l) / 50) + 10;
    scanf("%d %d %d",&b,&lV,&eV);
    at = (((lV + b + sqrt(eV) / 8) * l) / 50) + 5;
    scanf("%d %d %d",&b,&lV,&eV);
    df = (((lV + b + sqrt(eV) / 8) * l) / 50) + 5;
    scanf("%d %d %d",&b,&lV,&eV);
    sp = (((lV + b + sqrt(eV) / 8) * l) / 50) + 5;

    printf("Caso #%d: %s nivel %d\n",i,nome,l);
    printf("HP: %d\n",hp);
    printf("AT: %d\n",at);
    printf("DF: %d\n",df);
    printf("SP: %d\n",sp);
  }

  return 0;
}
