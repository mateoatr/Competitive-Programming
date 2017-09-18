#include <bits/stdc++.h>
using ll = long long;

int main () {
  int N, M;
  ll comb[101][101] = {0};

  comb[0][0] = 1;
  for (int i = 1; i < 101; i++) {
    comb[i][0] = 1;
    for (int j = 1; j <= i; j++) {
      comb[i][j] = comb[i-1][j] + comb[i-1][j-1];
    }
  }
  
  while (scanf("%d %d", &N, &M) && (N + M != 0)) {
    printf("%d things taken %d at a time is %lld exactly.\n", N, M, comb[N][M]);
  }

  return 0;
}
