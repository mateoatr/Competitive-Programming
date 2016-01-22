#include <iostream>
#include <cctype>
using namespace std;

int main(){
  int t; string s; cin >> t;
  getline(cin,s);
  while(t--){
    getline(cin,s);
    string temp = s;
    for(size_t i = 0; i < s.size(); i++){
      if(isalpha(s[i]))
	s[i] = (char)((int)(s[i] + 3));
      temp[s.size()-i-1] = s[i];
    }
    s = temp;
    for(int i = (int)s.size()/2; i < (int)s.size(); i++)
      s[i] = (char)((int)(s[i] - 1));
    cout << s << endl;
  }
  return 0;
}
