#include <bits/stdc++.h>
using ll = long long;

int main () {
  int n, k;

  while (scanf("%d %d", &n, &k) && (n + k != 0)) {
    ll comb = 1;
    if (k > n/2) k = n - k;

    for (int i = 0; i < k; i++)
      comb = comb * (n - i)/(1 + i);

    printf("%lld\n", comb);
  }

  return 0;
}
