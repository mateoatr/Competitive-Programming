#include <iostream>
using namespace std;

int main(){
  string s;
  
  while(getline(cin,s)){
    string ans = "";
    for(int i = 0; i < (int)s.size(); i++){
      if(islower(s[i]))
	ans += (int)((((s[i] - 'a')+13)%26)+'a'); 
      else if(isupper(s[i]))
	ans += (int)((((s[i] - 'A')+13)%26)+'A');
      else
	ans += s[i];
    }

    cout << ans << endl;
  }

  return 0;
}
