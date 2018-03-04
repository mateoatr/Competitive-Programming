#include <bits/stdc++.h>
using namespace std;

int main () {
  int Q, y = 0, n = 0, x; scanf("%d", &Q);
  for (int i = 0; i < Q; i++) {
    scanf("%d", &x);
    x == 1 ? n++ : y++;
  }
  y > n ? printf("Y\n") : printf("N\n");

  return 0;
}
