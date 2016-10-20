#include <stdio.h>

int main(){
 
  float A, B, C, aux;
  
  scanf("%f %f %f", &A, &B, &C);
  
  if(A > B){
    A = A;
    B = B;
  }
  if(B > A){
    aux = A;
    A = B;
    B = aux;
  }
  if(C > A){
    aux = C;
    C = A;
    A = aux;
  }
  
  if( A >= B+C){
    printf("NAO FORMA TRIANGULO\n");
  }else if(A*A == B*B + C*C){
    printf("TRIANGULO RETANGULO\n");
  }else if(A*A > B*B + C*C){
    printf("TRIANGULO OBTUSANGULO\n");
  }else if(A*A < B*B + C*C){
    printf("TRIANGULO ACUTANGULO\n");
  }
  if(A == B && C == A){
    printf("TRIANGULO EQUILATERO\n");
  }else if(A==B || A==C || B==C){
    printf("TRIANGULO ISOSCELES\n");
  }
 
  return 0;
}
