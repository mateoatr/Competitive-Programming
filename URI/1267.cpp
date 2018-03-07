#include <bits/stdc++.h>
using namespace std;

int main () {
  int N, D, x;

  while (scanf("%d %d", &N, &D) && N != 0 && D != 0) {
    int people[N];
    fill(people, people+N, 0);
    bool ans = false;
    
    for (int i = 0; i < D; i++) {
      for (int j = 0; j < N; j++) {
	scanf("%d", &x); people[j] += x;
	if (i == D-1) {
	  if (people[j] == D) ans = true;
	}
      }
    }

    ans ? printf("yes\n") : printf("no\n");
  }

  return 0;
}
