#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;
  int M1, V1, M2, V2;
  char equis;
  
  while (N--) {
    cin >> M1 >> equis >> V1 >> V2 >> equis >> M2;

    if (M1 + M2 > V1 + V2)
      cout << "Time 1" << endl;
    else if (V1 + V2 > M1 + M2)
      cout << "Time 2" << endl;
    else if (M2 > V1)
      cout << "Time 1" << endl;
    else if (V1 > M2)
      cout << "Time 2" << endl;
    else
      cout << "Penaltis" << endl;
  }

  return 0;
}
