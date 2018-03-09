#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;

  while (scanf("%d", &n) == true) {
    bool B = false;
    if (n < 0) {
      printf("NO\n");
      continue;
    }

    for (int i = 0; i <= sqrt(n) + 1; i++) {
      int x = (int)(sqrt(n - i*i));
      if (x*x == n - i*i) {
	B = true;
	break;
      }
    }
    B ? printf("YES\n") : printf("NO\n");
  }

  return 0;
}
