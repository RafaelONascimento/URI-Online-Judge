#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){
  if(b == 0){
    return a;
  }
  else{
    return mdc(b,a%b);
  }
}


int main(){
  int a, b, c, mindc;
  
  while(scanf("%d %d %d",&a,&b,&c) != EOF){
    mindc =  mdc(mdc(a,b),c);

    if(a > b && a > c){
      a ^= c;
      c ^= a;
      a ^= c;
    }
    else if(b > a && b > c){
      b ^= c;
      c ^= b;
      b ^= c;
    }
    
    if((a*a)+(b*b) == (c*c) && mindc == 1){
      printf("tripla pitagorica primitiva\n");
    }
    else if((a*a)+(b*b) == (c*c) && mindc != 1){
      printf("tripla pitagorica\n");
    }
    else{
      printf("tripla\n");
    }
  }
  return 0; 
}
