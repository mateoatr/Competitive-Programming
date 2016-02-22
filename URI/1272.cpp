#include <iostream>
#include <sstream>
using namespace std;

int main(){
  string s, p; int n; cin >> n;
  getline(cin,s);

  while(n--){
    string a;
    getline(cin,s);
    istringstream ss(s);
    while(ss >> p)
      a += p[0];
    cout << a << endl;
  }

  return 0;
}
