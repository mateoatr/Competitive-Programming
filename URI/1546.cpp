#include <iostream>
using namespace std;

int main() {
  int n, k, x;
  cin >> n;

  while (n--) {
    cin >> k;

    while (k--) {
      cin >> x;

      if (x == 1) cout << "Rolien" << endl;
      else if (x == 2) cout << "Naej" << endl;
      else if (x == 3) cout << "Elehcim" << endl;
      else if (x == 4) cout << "Odranoel" << endl;
    }
  }

  return 0;
}
