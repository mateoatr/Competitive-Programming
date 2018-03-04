#include <bits/stdc++.h>
using namespace std;

int main () {
  string str, z;
  
  while (true) {
    getline(cin, str);
    istringstream iss(str);
    char c = '_';
    bool b = false;

    while (iss >> z) {
      if (c == '_') c = tolower(z[0]);
      else {
	if (tolower(z[0]) != c) b = true;
      }
    }
    
    if (c == '*') break;

    b ? printf("N\n") : printf("Y\n");
  }

  return 0;
}
