#include <iostream>
using namespace std;

int main(){
  int t; string s; cin >> t;

  getline(cin,s);
  while(t--){
    getline(cin,s);
    for(int i = (int)s.size()/2-1; i >= 0; i--)
      cout << s[i];
    for(int i = (int)s.size()-1; i >= (int)s.size()/2; i--)
      cout << s[i];
    cout << endl;
  }

  return 0;
}
