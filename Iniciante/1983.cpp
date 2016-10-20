#include <stdio.h>
#include <stdlib.h>

int main(){
  long int nMat, mTmp;
  int i, m;
  float mNota = 0.0, nTmp;

  scanf("%d",&m);

  for(i = 0; i < m; i++){
    scanf("%ld",&mTmp);
    scanf("%f",&nTmp);

    if(mNota < nTmp){
      mNota = nTmp;
      nMat = mTmp;
    }
  }

  if(mNota < 8){
    printf("Minimum note not reached\n");
  }
  else{
    printf("%ld\n",nMat);
  }

  return 0;
}
