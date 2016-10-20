#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int mus[101], n, memo[101][51][51][51];

int PD(int i, int f1, int f2, int f3) {
  int e1, e2, e3, e4;
  if (i == n) return 0;
  if (memo[i][f1][f2][f3] != -1) return memo[i][f1][f2][f3];
  e4 = PD(i + 1, f1, f2, f3);
  e1 = (f1 - mus[i]) >= 0 ? mus[i] + PD( i + 1, f1 - mus[i], f2, f3 ) : 0;
  e2 = (f2 - mus[i]) >= 0 ? mus[i] + PD( i + 1, f1, f2 - mus[i], f3 ) : 0;
  e3 = (f3 - mus[i]) >= 0 ? mus[i] + PD( i + 1, f1, f2, f3 - mus[i] ) : 0;
  return memo[i][f1][f2][f3] = max( e1, max( e2, max( e3, e4 )));
}


int main() {
  int i, k, fitas[] = {0, 0, 0};

  memset(memo, -1, sizeof(memo));

  scanf("%d %d", &n, &k);
  for (i = 0; i < n; i++) scanf("%d", &mus[i]);
  for (i = 0; i < k; i++) scanf("%d", &fitas[i]);
  
  printf("%d\n", PD(0, fitas[0], fitas[1], fitas[2]) );

  return 0;
}
