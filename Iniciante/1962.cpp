#include <cstdio>
#include <cstdlib>

int main(){
  int i, ano, tmp;

  scanf("%d",&i);

  while(i--){
    scanf("%d",&ano);
    tmp = ano - 2014;

    if(ano == 2014) printf("1 D.C.\n");
    else if(tmp < 0) printf("%d D.C.\n",(tmp*-1)+1);
    else printf("%d A.C.\n",tmp);
  }

  return 0;
}
