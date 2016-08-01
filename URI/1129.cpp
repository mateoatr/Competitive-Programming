#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n && n) {
    while (n--) {
      int r;
      int ans = 0, N = 0;
      
      for (int i = 1; i <= 5; i++) {
	cin >> r;
	if (r <= 127) {
	  ans = i;
	  N++;
	}
      }

      if (N > 1 || N == 0)
	cout << "*" << endl;
      else {
	if (ans == 1) cout << "A" << endl;
	if (ans == 2) cout << "B" << endl;
	if (ans == 3) cout << "C" << endl;
	if (ans == 4) cout << "D" << endl;
	if (ans == 5) cout << "E" << endl;
      }
    }
  }

  return 0;
}
