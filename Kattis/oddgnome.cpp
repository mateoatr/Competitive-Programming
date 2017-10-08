#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, g;
  cin >> n;

  while (n--) {
    cin >> g;
    int a, b; cin >> a;
    bool c = true;
    for (int i = 1; i < g; i++) {
      cin >> b;
      if (b-a != 1 && c) {
	cout << i + 1 << endl;
	c = false;
      }
      a = b;
    }
  }

  return 0;
}
