#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>

using namespace std;

#define MAX 112345

int main(){
  int alice[MAX], beatriz[MAX], a, b, t, na, nb, i;
  queue<int> qAlice, qBeatriz;
   
  while(scanf("%d %d",&a,&b), (a+b)){
    memset(alice,0,sizeof(alice));
    memset(beatriz,0,sizeof(beatriz));
    na = nb = 0;

    for(i = 1; i <= a; i++){
      scanf("%d",&t);
      alice[t] = 1;
      qAlice.push(t);
    }
    
    for(i = 1; i <= b; i++){
      scanf("%d",&t);
      beatriz[t] = 1;
      qBeatriz.push(t);
    }

    while(!qAlice.empty() || !qBeatriz.empty()){
      if(!qAlice.empty()){
	t = qAlice.front();
	qAlice.pop();
	
	if(beatriz[t] == 0){
	  na++;
	  beatriz[t] = -1;
	}
      }
      if(!qBeatriz.empty()){
	t = qBeatriz.front();
	qBeatriz.pop();
      
	if(alice[t] == 0){
	  nb++;
	  alice[t] = -1;
	}
      }
    }
   
    printf("%d\n",(na < nb)?na:nb);
  }

  return 0 ;
}
