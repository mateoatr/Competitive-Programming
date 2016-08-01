#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n && n) {
    int a = 0, b = 0, x, y;
    
    while (n--) {
      cin >> x >> y;
      if (x > y) a++;
      else if (y > x) b++;
    }

    cout << a << " " << b << endl;
  }

  return 0;
}
