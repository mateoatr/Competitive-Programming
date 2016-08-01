#include <iostream>
using namespace std;

int main() {
  int N, R, volunteer;
  bool volunteers[10010];
  
  while (cin >> N >> R) {
    for (int i = 0; i < N; i++) volunteers[i] = false;
    bool all = true;
    
    while (R--) {
      cin >> volunteer;
      volunteers[volunteer - 1] = true;
    }

    for (int i = 0; i < N; i++) {
      if (!volunteers[i]) {
	cout << i + 1 << " ";
	all = false;
      }
    }

    if (all) cout << "*";
    
    cout << endl;
  }
  
  return 0;
}
