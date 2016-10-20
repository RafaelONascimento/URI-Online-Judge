#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  int X;
  float Y;
  float consumoMedio;
  
  scanf("%d",&X);
  scanf("%f",&Y);
  
  consumoMedio = (X/Y);
  printf("%.3f km/l\n",consumoMedio);
  
  return 0;
}
