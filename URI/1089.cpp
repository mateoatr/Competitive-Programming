#include <iostream>
using namespace std;

int main() {
  int N;

  while (cin >> N && N) {
    int loop[N+2];
    int r = 0;

    for (int i = 0; i < N; i++)
      cin >> loop[i];
    loop[N] = loop[0];
    loop[N+1] = loop[1];

    for (int i = 1; i <= N; i++) {
      if (loop[i] < loop[i-1] && loop[i] < loop[i+1]) r++;
      else if (loop[i] > loop[i-1] && loop[i] > loop[i+1]) r++;
    }

    cout << r << endl;
  }

  return 0;
}
