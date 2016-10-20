#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 105

int main(){
  int n, c, d, i;
  char language[MAX][20];

  scanf("%d",&n);

  while(n--){
    d = 1;
    scanf("%d",&c);

    for(i = 0; i < c; i++) scanf("%s",language[i]);
    for(i = 1; i < c; i++)
      if(!strcmp(language[0],language[i])) d++;

    if(d == c) printf("%s\n",language[0]);
    else printf("ingles\n");
  }

  return 0;
}
