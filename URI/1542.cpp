#include <iostream>
using namespace std;

int main() {
  int Q, D, P;

  while (cin >> Q && Q) {
    cin >> D >> P;
    int n = (D * P * Q)/(P - Q);
    cout << n;

    if (n == 1) cout << " pagina" << endl;
    else cout << " paginas" << endl;
  }
}
