#include <iostream>
#include <sstream>
using namespace std;

int main() {
  char querty[47] = { '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/' };
  string s;

  while (getline(cin, s)) {
    for (int i = 0; i < (int)s.size(); i++) {
      if (s[i] == ' ') { cout << " "; continue; }
      for (int j = 0; j < 47; j++) {
	if (s[i] == querty[j]) {
	  cout << querty[j - 1];
	  break;
	}
      }
    }
    
    cout << endl;
  }
  
  return 0;
}
