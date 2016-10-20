#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

//http://www.brasilescola.com/matematica/triangulo.htm
int verificaTriangulo(int a, int b, int c){
  int pontos = 0;

  if(abs(b - c) < a && a < (b+c)){
    pontos++;
  }
  if(abs(a-c) < b && b < (a+c)){
    pontos++;
  }
  if(abs(a-b) < c && c < (a+b)){
    pontos++;
  }

  return (pontos==3)?1:0;
}

int main(){
  int vareta[4], i;
  
  for(i = 0; i < 4; i++){
    scanf("%d",&vareta[i]);
  }
 
  qsort(vareta, 4, sizeof(int),cmp);

  if(verificaTriangulo(vareta[0],vareta[1],vareta[2]) == 1){
    printf("S\n");
  }
  else if(verificaTriangulo(vareta[1],vareta[2],vareta[3]) == 1){
    printf("S\n");
  }
  else{
    printf("N\n");
  }

  return 0;
}
