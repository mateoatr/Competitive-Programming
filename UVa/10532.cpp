#include <cstdio>
using namespace std;
typedef long long ll;

int main () {
  int m, n, r, x, c = 1;

  while (scanf("%d %d", &n, &r) == 2 && (n + r != 0)) {
    int labels[52] = {0};
    for (int i = 0; i < n; i++) {
      scanf("%d", &x);
      labels[x]++;
    }

    printf("Case %d:\n", c++);

    while (r--) {
      scanf("%d", &m);
      ll dp[100][100] = {};
      dp[0][0] = 1;

      for (int i = 1; i <= n; i++) {
	for (int j = 0; j <= m; j++) {
	  dp[i][j] = dp[i-1][j];
	}

	for (int j = 0; j <= m; j++) {
	  for (int k = 1; k <= labels[i] && (j+k) <= m; k++) {
	    dp[i][j+k] += dp[i-1][j];
	  }
	}
      }

      printf("%lld\n", dp[n][m]);
    }
  }

  return 0;
}
