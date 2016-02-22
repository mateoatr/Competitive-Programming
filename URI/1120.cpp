#include <iostream>
using namespace std;

int main(){
  int a; string s;

  while(cin >> a >> s && (s != "0" && a != 0)){
    bool dist_cero = false;
    for(int i = 0; i < (int)s.size(); i++){
      if((int)(s[i]-'0') != a && dist_cero)
	cout << s[i];
      else if((int)(s[i]-'0') != a && (int)(s[i]-'0') != 0){
	dist_cero = true;
	cout << s[i];
      }
    }
    if(!dist_cero) cout << 0;
    cout << endl;
  }

  return 0;
}
