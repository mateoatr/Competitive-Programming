#include <iostream>
using namespace std;

int main(){
  string s;
  while(getline(cin,s)){
    string ans = "";
    bool mayus = true;
    for(int i = 0; i < (int)s.size(); i++){
      if(mayus && s[i] != ' '){
	ans += toupper(s[i]);
	mayus = false;
      }
      else if(s[i] != ' '){
	ans += tolower(s[i]);
	mayus = true;
      }
      else
	ans += ' ';
    }

    cout << ans << endl;
  }

  return 0;
}
