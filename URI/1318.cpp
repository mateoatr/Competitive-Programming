#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, m;
  
  while (scanf("%d %d", &n, &m) && n != 0 && m != 0) {
    set<int> S, C;
    for (int i = 0; i < m; i++) {
      scanf("%d", &n);
      if (S.find(n) != S.end()) C.insert(n);
      S.insert(n);
    }
    
    printf("%d\n", (int)C.size());
  }

  return 0;
}
