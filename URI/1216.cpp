#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string s;
  int n, d = 0;
  double r = 0;

  while (getline(cin,s)) {
    getline(cin,s);
    istringstream iss(s);
    iss >> n;
    r += n; d++;
  }

  cout << fixed << setprecision(1) << r/d << endl;

  return 0;
}
