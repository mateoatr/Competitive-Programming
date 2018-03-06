#include <bits/stdc++.h>
using namespace std;

int main () {
  int c, N;
  char s[1000];
  scanf ("%d", &c);

  while (c--) {
    int ans = 0;
    scanf("%d", &N);
    int jumps[N];
    for (int i = 0; i < N; i++) {
      scanf("%d", &jumps[i]);
    }
    scanf(" %s", s);

    for (int i = 0; i < N; i++) {
      ((jumps[i] > 2 && s[i] == 'J') || (jumps[i] <= 2 && s[i] == 'S')) ? ans++ : ans = ans;
    }

    printf("%d\n", ans);
  }

  return 0;
}
