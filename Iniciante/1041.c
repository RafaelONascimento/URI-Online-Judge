#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  float x , y;
 
  scanf("%f %f",&x, &y);
  
  if((x >= 0.1)&&(y >= 0.1)){
    printf("Q1\n");
  }
  else if((x <= -0.1) && (y >= 0.1)){
    printf("Q2\n");
  }
  else if((x<= -0.1) && (y <= -0.1)){
    printf("Q3\n");
  }
  else if((x >= 0.1) && (y <= -0.1)){
    printf("Q4\n");
  }
  else if((x == 0) && (y == 0)){
    printf("Origem\n");
  }
  else if((x == 0)&& (y != 0)){
    printf("Eixo Y\n");
  }
  else if((x != 0) && (y == 0)){
    printf("Eixo X\n");
  }

  return 0;
}