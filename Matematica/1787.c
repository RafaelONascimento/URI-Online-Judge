#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int x){
   int y = log(x)/log(2);
   
   if(pow(2,y)==x){
     return 1; 
   }
   else{
     return 0;
   }
 }

int main(){
  int n;
  long long int ui, ri, li;

  while(scanf("%d",&n),n!=0){
    int pontosUI =  0,pontosRI = 0, pontosLI = 0;

    while(n--){
      scanf("%lld %lld %lld",&ui, &ri, &li);
      
      if(potencia(ui)){
	pontosUI++;
	if(ui > li && ui > ri){
	  pontosUI++;
	}
      }
      if(potencia(ri)){
	pontosRI++;
	if(ri > li & ri > li){
	  pontosRI++;
	}
      } 
      if(potencia(li)){
	pontosLI++;
	if(li > ui && li > ri){
	  pontosLI++;
	}
      }
    }
    if(pontosUI > pontosLI && pontosUI > pontosRI){
      printf("Uilton\n");
    }
    else if(pontosRI > pontosUI && pontosRI > pontosLI){
      printf("Rita\n");
    }
    else if(pontosLI > pontosRI && pontosLI > pontosUI){
      printf("Ingred\n");
    }
    else{
      printf("URI\n");
    }
  }
}
