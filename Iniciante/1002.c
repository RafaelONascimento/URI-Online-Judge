#include <stdio.h>
#include <stdlib.h>
 
main()
{
  double raio;
  double pi = 3.14159;
  double area;
  
  scanf("%lf",&raio);
  
  area = ((raio*raio) * pi);
  
  printf("A=%.4f\n",area);
 
  return 0;
 
}
