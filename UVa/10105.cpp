#include <cstdio>
using namespace std;

int main () {
  int n, k;
  long long factorial[18];
  factorial[0] = 1;
  for (int i = 1; i < 18; i++) {
    factorial[i] = i*factorial[i-1];
  } 

  while (scanf("%d %d", &n, &k) == 2) {
    long long ans = 1, x;
    
    for (int i = 0; i < k; i++) {
      scanf("%lld", &x);
      ans *= factorial[x];
    }

    ans = factorial[n]/ans;
    printf("%lld\n", ans);
  }

  return 0;
}
