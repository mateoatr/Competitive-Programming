#include <bits/stdc++.h>
using namespace std;

int main ()  {
  int a, b, x;
  while (scanf("%d %d", &a, &b) && a != 0 && b != 0) {
    set<int> A, B;

    for (int i = 0; i < a; i++) {
      scanf("%d", &x);
      A.insert(x);
    }

    for (int i = 0; i < b; i++) {
      scanf("%d", &x);
      B.insert(x);
    }

    set<int> &minSet = A.size() < B.size() ? A : B;
    set<int> &maxSet = A.size() >= B.size() ? A : B;
    int ans = 0;

    for (int i : minSet) {
      if (maxSet.find(i) == maxSet.end()) ans++;
    }
    
    printf("%d\n", ans);
  }

  return 0;
}
