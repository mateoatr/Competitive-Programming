#include <iostream>
using namespace std;

int main() {
  int N, p, q, a, b, x, idxP, idxQ;

  while (cin >> N && N) {
    cin >> a >> b;
    if (a > b) { p = a; q = b; idxP = 1; idxQ = 2; }
    else { p = b; q = a; idxP = 2; idxQ = 1; }

    for (int i = 3; i <= N; i++) {
      cin >> x;
      if (x > p && x > q) {
	idxQ = idxP;
	q = p;
	idxP = i;
	p = x;
      }
      else if (x < p && x > q) {
	idxQ = i;
	q = x;
      }
    }

    cout << idxQ << endl;
  }

  return 0;
}
