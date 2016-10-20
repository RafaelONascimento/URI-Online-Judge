#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int n, b, r, t;
  
  while(scanf("%d", &n) != EOF && n){
    b = 0, r = 10;
    
    for (int i = 0; i < n; ++i){
      scanf("%d", &t);
      if(i) r += (int) min(t - b, 10);
      b = t;
    }
    
    printf("%d\n", r);
  }
  
  return 0;
}
