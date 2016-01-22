#include <iostream>
using namespace std;

int main(){
  string s;
  while(getline(cin,s) && s != "DONE"){
    string p = "";
    for(size_t i = 0; i < s.size(); i++)
      if(isalpha(s[i]))
	p += toupper(s[i]);

    bool palindrome = true;
    for(size_t i = 0; i < p.size()/2; i++)
      if(p[i] != p[(int)p.size()-i-1]){
	palindrome = false;
	break;
      }

    if(palindrome)
      cout << "You won't be eaten!" << endl;
    else
      cout << "Uh oh.." << endl;
  }

  return 0;
}
