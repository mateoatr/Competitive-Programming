#include <bits/stdc++.h>
using namespace std;

int main () {
  int T, N, x; scanf("%d", &T);
  while (T--) {
    scanf("%d", &N);
    set<int> S;
    for (int i = 0; i < N; i++) {
      scanf("%d", &x); S.insert(x);
    }
    printf("%d\n", (int)S.size());
  }
  return 0;
}
