#include <bits/stdc++.h>
using namespace std;

int main () {
  int LA, LB, N, SA, SB;
  scanf("%d %d %d %d %d", &N, &LA, &LB, &SA, &SB);
  (LA <= N && LB >= N && SA <= N && SB >= N) ? printf("possivel\n") : printf("impossivel\n");
  return 0;
}
