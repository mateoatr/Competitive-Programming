#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, m;
  
  while (scanf("%d %d", &n, &m) && n != 0 && m != 0) {
    string s = to_string(n+m);
    for (int i = 0; i < (int)s.size(); i++)
      if (s[i] != '0') printf("%c", s[i]);
    printf("\n");
  }
  
  return 0;
}
