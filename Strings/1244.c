#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11234

typedef struct{
  char texto[60];
  int tamanho;
}textos;

int main(){
  int pqp;
  scanf("%d",&pqp);
  getchar();
  while(pqp--){
    char mensagem[MAX];
    int i, j, k=0, m=0, q=0, s=0, tGeral, espaco[50], indice,n;
    textos string[MAX],max;
    
    memset(string,0,sizeof(string));
    
    fgets(mensagem,MAX,stdin);
    
    espaco[0] = 0;
    
    tGeral = strlen(mensagem);
    mensagem[tGeral-1] = '\0';
    for(i = 0;i < tGeral; i++){
      if(mensagem[i] == ' '){
	k++;
	espaco[k] = i+1;
      }
    }
    
    for(i= 0; i <= k;i++){
      s = (i==k)?tGeral:espaco[i+1];
      for(j = espaco[i], m = 0; j < s-1; j++, m++)  
	string[q].texto[m] = mensagem[j];

      string[q].tamanho = strlen(string[q].texto);
      q++;
    }
    
    for(i= 0; i <= k; i++){
      for(j = 0; j <= k - i - 1; j++){
	if(strlen(string[j].texto) > strlen(string[j + 1].texto)){
	  strcpy(mensagem, string[j].texto);
	  strcpy(string[j].texto, string[j + 1].texto);
	  strcpy(string[j + 1].texto, mensagem);
	}
      }
    }
    
    for(i = k; i >=0; i--){ 
      printf("%s",string[i].texto);
      if(i != 0) printf(" ");
    }
    
    printf("\n");
  }
  return 0;
}
