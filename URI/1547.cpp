#include <iostream>
#include <climits>
using namespace std;

int main() {
  int N, QT, S, x;
  cin >> N;

  while (N--) {
    int ans, diff = INT_MAX;

    cin >> QT >> S;

    for (int i = 0; i < QT; i++) {
      cin >> x;
      if (abs(S - x) < diff) {
	diff = abs(S - x);
	ans = i + 1;
      }
    }

    cout << ans << endl;
  }
  
  return 0;
}
