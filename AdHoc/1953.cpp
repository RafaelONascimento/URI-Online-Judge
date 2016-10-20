#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(){
  unsigned long int t, epr, ehd,intr, tmp;
  char pla[8];  
  while(scanf("%ld",&t) == 1){  
    epr = 0;
    ehd = 0;
    intr = 0;
       
    while(t--){
      scanf("%ld %s",&tmp,pla);
 
      if(!strcmp(pla,"EPR"))epr++;
      else if(!strcmp(pla,"EHD")) ehd++;
      else intr++;
    }
 
    printf("EPR: %ld\n",epr);
    printf("EHD: %ld\n",ehd);
    printf("INTRUSOS: %ld\n",intr);
  }
  return 0;
}
