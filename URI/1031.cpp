#include <bits/stdc++.h>
using namespace std;

int g (int n, int k) {
  if (n == 1) return 0;
  return (g(n-1,k)+k)%n;
}

int main () {
  int n;
  
  while (scanf("%d", &n) && n != 0) {
    int m = 1;
    int x = g(n-1,m) + 1;

    while (x != 12) {
      x = g(n-1, ++m) + 1;
    }

    printf("%d\n", m);
  }
  
  return 0;
}
