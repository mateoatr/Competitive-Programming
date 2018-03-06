#include <bits/stdc++.h>
using namespace std;

int main () {
  int N, M;
  
  while (scanf("%d %d", &N, &M) == 2) {
    string s;
    int ans = 0;

    for (int i = N; i <= M; i++) {
      int digits[10] = {0};
      bool add = true;
      s = to_string(i);
      
      for (int j = 0; j < (int)s.size(); j++) {
	digits[(int)(s[j]-'0')]++;
	if (digits[(int)(s[j]-'0')] > 1) { 
	  add = false;
	  break;
	}
      }

      add ? ans++ : ans = ans;
    }

    printf("%d\n", ans);
  }

  return 0;
}
