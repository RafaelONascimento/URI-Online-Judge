#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
  double x,y;
}point;

int main(){
  point a,b,c, prodVet, prodC;
  int n, i, leftPop = 0, leftPlan = 0, rightPop = 0, rightPlan = 0, midle = 0, pop;
  double det, distance;
  
  scanf("%lf %lf %lf %lf",&a.x,&a.y,&b.x,&b.y);

  scanf("%d",&n);

  prodVet.x = (b.x-a.x);
  prodVet.y = (b.y-a.y);
  distance = sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
  
  while(n--){
    scanf("%lf %lf %d",&c.x,&c.y,&pop);
    prodC.x = (c.x-a.x);
    prodC.y = (c.y-a.y);
    det = ((prodVet.x*prodC.y)-(prodVet.y*prodC.x));
    if(det > 0){
      leftPlan++;
      leftPop += pop;
    }
    else if(det < 0){
      rightPlan++;
      rightPop += pop;
    }
    else midle++;
  }

  printf("Relatorio Vogon #35987-2\n");
  printf("Distancia entre referencias: %.2lf anos-luz\n",distance);
  printf("Setor Oeste:\n");
  printf("- %d planeta(s)\n",leftPlan);
  printf("- %d bilhao(oes) de habitante(s)\n",leftPop);
  printf("Setor Leste:\n");
  printf("- %d planeta(s)\n",rightPlan);
  printf("- %d bilhao(oes) de habitante(s)\n",rightPop);
  printf("Casualidades: %d planeta(s)\n",midle);
  return 0;
}
