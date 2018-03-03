#include <bits/stdc++.h>
using namespace std;

int main () {
  int x[5], y[5];
  
  for (int i = 0; i < 5; i++) scanf("%d", &x[i]);
  for (int i = 0; i < 5; i++) scanf("%d", &y[i]);
  for (int i = 0; i < 5; i++) {
    if (x[i] + y[i] != 1) {
      printf("N\n");
      return 0;
    }
  }
  printf("Y\n");

  return 0;
}
