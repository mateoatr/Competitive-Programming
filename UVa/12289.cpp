#include <iostream>
using namespace std;

int main(){
  int t; cin >> t;
  string s;
  
  while(t--){
    cin >> s;
    if((int)s.size() == 5) cout << 3 << endl;
    else if(s[0] == 'o' || s[1] == 'n') cout << 1 << endl;
    else cout << 2 << endl;
  }

  return 0;
}
