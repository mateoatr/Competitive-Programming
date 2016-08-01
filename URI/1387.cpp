#include <iostream>
using namespace std;

int main() {
  int L, R;

  while (cin >> L >> R && (L | R)) {
    cout << L + R << endl;
  }
  
  return 0;
}
