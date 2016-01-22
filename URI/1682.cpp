#include <iostream>
using namespace std;

int main(){
  int n;
  string seq = "NONPNOPNPONOPNONPNOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNOPNPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOP";
    
  while(cin >> n && n != 0)
    cout << seq.substr(0,n) << endl;

  return 0;
}
