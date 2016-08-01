#include <cctype>
#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;

  while (n--) {
    cin >> s;

    if (s[0] == s[2])
      cout << (int)(s[0] - '0') * (int)(s[2] - '0') << endl;
    else if (islower(s[1]))
      cout << (int)(s[0] - '0') + (int)(s[2] - '0') << endl;
    else
      cout << (int)(s[2] - '0') - (int)(s[0] - '0') << endl;
  }

  return 0;
}
