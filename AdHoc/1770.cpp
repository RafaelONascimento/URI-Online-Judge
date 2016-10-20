#include <stdio.h>

using namespace std;

typedef struct{
  bool flag;
  int time;
}music;

music playlist[101];

int main()
{
  int m, k, t, c, x, i;
  
  while(scanf("%d %d",&m, &k) !=  EOF){
    t = c = 0;
    
    for(i = 0; i < m; i++){
      scanf("%d",&playlist[i].time);
      playlist[i].flag = 0;
    }
    
    for(i = 0; i< k; i++){
      scanf("%d",&x);
      if(c < m){
	t += playlist[x-1].time;
	if(!playlist[x-1].flag){
	  c++;
	  playlist[x-1].flag = 1;
	}
      }
    }

    printf("%d\n",(c < m)?-1:t);
  }
  
  return 0;
}
