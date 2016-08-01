#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  
  while (cin >> n && n) {
    char estado = 'N';
    cin >> s;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'E') {
	if (estado == 'N') estado = 'O';
	else if (estado == 'L') estado = 'N';
	else if (estado == 'S') estado = 'L';
	else if (estado == 'O') estado = 'S';
      }
      else {
	if (estado == 'N') estado = 'L';
	else if (estado == 'L') estado = 'S';
	else if (estado == 'S') estado = 'O';
	else if (estado == 'O') estado = 'N';
      }
    }

    cout << estado << endl;
  }

  return 0;
}
