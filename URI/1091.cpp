#include <iostream>
using namespace std;

int main() {
  int n, x, y, a, b;

  while (cin >> n && n) {
    cin >> x >> y;

    while (n--) {
      cin >> a >> b;

      if (a > x && b > y)
	cout << "NE" << endl;
      else if (a < x && b > y)
	cout << "NO" << endl;
      else if (a < x && b < y)
	cout << "SO" << endl;
      else if (a > x && b < y)
	cout << "SE" << endl;
      else
	cout << "divisa" << endl;
    }
  }

  return 0;
}
