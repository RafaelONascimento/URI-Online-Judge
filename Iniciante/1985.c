#include <stdio.h>
#include <stdlib.h>

float value(int code, float times){
  float total;
  switch(code){
     case 1001: total = 1.5 * times; break;
     case 1002: total = 2.5 * times; break;
     case 1003: total = 3.5 * times; break;
     case 1004: total = 4.5 * times; break;
     case 1005: total = 5.5 * times; break;
  }
  return total;
}

int main(){
  int code, n; 
  float times, total = 0.0;
  scanf("%d",&n);
  
  while(n--){
    scanf("%d %f",&code,&times);
    total += value(code,times);
  }
  printf("%.2f\n",total);
  
  return 0;
}
