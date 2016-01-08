#include <iostream>
using namespace std;

int main(){
  int caso = 0;
  string s;
  while(cin >> s && s != "*"){
    if(s == "Hajj") cout << "Case " << ++caso << ": Hajj-e-Akbar" << endl;
    else cout << "Case " << ++caso << ": Hajj-e-Asghar" << endl;
   }
  return 0;
}
