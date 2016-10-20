#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
  int l,c,r1,r2, ml, md, d;

  while(scanf("%d %d %d %d",&l,&c,&r1,&r2),l || c || r1 || r2){
    r1 = r1*2;
    r2 = r2*2;

    d = sqrt((l*l)+(c*c));
    //ml = max(l,c);
    //md = max(r1,r2);

    /* if(ml >= (r1+r2) && ((l+c)-ml) >= md) printf("S\n");
       else{*/
      if((r1+r2) <= d) printf("S\n"); 
      else printf("N\n");
      //   }
  }

  return 0;
}
