#include <iostream>
#include <map>
using namespace std;

int main(){
  map<string,string> mapa;
  string s; int x = 1;

  mapa["HELLO"] = "ENGLISH"; mapa["HOLA"] = "SPANISH"; mapa["HALLO"] = "GERMAN";
  mapa["BONJOUR"] = "FRENCH"; mapa["CIAO"] = "ITALIAN"; mapa["ZDRAVSTVUJTE"] = "RUSSIAN";

  while(cin >> s && s != "#"){
    cout << "Case " << x << ": "; x++;
    if(!mapa.count(s)) cout << "UNKNOWN" << endl;
    else cout << mapa[s] << endl;
  }

  return 0;
}
