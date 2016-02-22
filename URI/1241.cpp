#include <iostream>
using namespace std;

int main(){
  string a, b; int t; cin >> t;
  while(t--){
    cin >> a >> b;

    if((int)b.size() > (int)a.size()) cout << "nao encaixa" << endl;
    else if(a.substr((int)a.size()-(int)b.size(),(int)a.size()) == b) cout << "encaixa" << endl;
    else cout << "nao encaixa" << endl;
  }
  
  return 0;
}
