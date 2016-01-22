#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main(){
  map<string,string> mapa;
  string s, t, a, b;

  while(getline(cin,s)){
    if(s.empty()) break;
    istringstream iss(s);
    bool add = false;
    while(iss >> t){
      if(!add){ a = t; add = true; }
      else b = t;
    }
    
    mapa[b] = a;
  }

  while(cin >> a){
    if(!mapa.count(a)) cout << "eh" << endl;
    else cout << mapa[a] << endl;
  }

  return 0;
}
