#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;
  double a, b, c;
  
  while (N--) {
    cin >> a >> b;
    b /= 2;
    c = 2 * ((a * b)/2);
    int r = c;
    cout << r << " cm2" << endl;
  }

  return 0;
}
