#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MAX 200

int main(){
  int n,m, i,oper[MAX], pos = 0;
  char inst[MAX];

  scanf("%d",&m);

  while(m--){
    pos = 0;
    scanf("%d",&n);
    getchar();
    memset(oper,0,sizeof(oper));
    
    for(i = 1; i <= n; i++){
      fgets(inst,MAX,stdin);
      
      if(inst[0] == 'L'){
	pos -= 1;
	oper[i] = -1;
      }
      else if(inst[0] == 'R'){
	pos += 1;
	oper[i] = 1;
      }
      else if(inst[0] == 'S'){
	if(inst[8]>=48 && inst[8] <= 57 && inst[10] >= 48 && inst[10] <= 57){
	  oper[i] = oper[(((inst[8]-48)*100)+((inst[9]-48)*10) + (inst[10]-48))];
	  pos += oper[i];
	}
	else if(inst[8]>=48 && inst[8] <= 57 && inst[9] >= 48 && inst[9] <= 57){
	  oper[i] = oper[(((inst[8]-48)*10)+(inst[9]-48))];
	  pos += oper[i];
	}
	else if(inst[8]>=48 && inst[8]){
	  oper[i] = oper[(inst[8]-48)];	
	  pos += oper[i];
	}
      }
    }
    printf("%d\n",pos);
  }
  return 0;
}
