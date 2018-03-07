#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, n;
  scanf("%d", &T);

  while (T--) {
    scanf("%d", &n);

    string s, z;
    int ans = 0;
    bool moveLeft[n];
    fill (moveLeft, moveLeft+n, false);

    for (int i = 0; i < n; i++) {
      getline (cin >> ws, s);
      istringstream iss(s);
      iss >> z;
      if (z == "LEFT") {
	moveLeft[i] = true;
	ans--;
      }
      else if (z == "RIGHT") ans++;
      else { 
	iss >> z; 
	iss >> z; 
	int x = stoi(z);
	moveLeft[i] = moveLeft[x-1];
	moveLeft[i] ? ans-- : ans++;
      }
    }

    printf("%d\n", ans);
  }
  
  return 0;
}
