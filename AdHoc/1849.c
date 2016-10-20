#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  long long drogon[2],viserion[2], i , area;
  
  scanf("%lli %lli %lli %lli",&drogon[0],&drogon[1],&viserion[0],&viserion[1]);
  
  qsort(drogon, 2, sizeof(long long int),&comparacao);
  qsort(viserion, 2 ,sizeof(long long int),&comparacao);

  if(drogon[1] == viserion[1]){
    area = ((drogon[0] + viserion[0]) < viserion[1])?drogon[0] + viserion[0]:viserion[1];
    area = area * area;
  }
  else if(drogon[1] > viserion[1]){
    area = ((drogon[0] + viserion[0]) < viserion[1])?drogon[0] + viserion[0]:viserion[1];
    area = area * area; 
  }
  else if(drogon[1] < viserion[1]){
    area = ((drogon[0] + viserion[0]) < drogon[1])?drogon[0] + viserion[0]:drogon[1];
    area = area * area;
  }
  
  printf("%lli\n",area);

  return 0;
}
