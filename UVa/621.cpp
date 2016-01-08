#include <iostream>
using namespace std;

int main(){
  string s;
  int t; cin >> t;

  while(t--){
    cin >> s;
    if(s == "1" || s == "4" || s == "78")
      cout << "+" << endl;
    else if((int)s.size() >= 2 && (s.substr((int)s.size()-2,2) == "35"))
      cout << "-" << endl;
    else if(((int)s.size() >= 3) && (s.substr(0,3) == "190"))
      cout << "?" << endl;
    else
      cout << "*" << endl;
  }
  
  return 0;
}
