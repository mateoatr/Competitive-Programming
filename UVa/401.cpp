#include <iostream>
#include <map>
using namespace std;

int main(){
  map<char,char> reversa;
  reversa['A'] = 'A'; reversa['E'] = '3'; reversa['H'] = 'H';
  reversa['I'] = 'I'; reversa['J'] = 'L'; reversa['L'] = 'J';
  reversa['M'] = 'M'; reversa['O'] = 'O'; reversa['T'] = 'T';
  reversa['U'] = 'U'; reversa['V'] = 'V'; reversa['W'] = 'W';
  reversa['X'] = 'X'; reversa['Y'] = 'Y'; reversa['Z'] = '5';
  reversa['1'] = '1'; reversa['S'] = '2'; reversa['2'] = 'S';
  reversa['5'] = 'Z'; reversa['8'] = '8'; reversa['3'] = 'E';

  string s, t;
  while(cin >> s){
    bool palindromo = true, mirror = true;

    for(int i = 0; i < (int)s.size()/2; i++)
      if(s[i] != s[((int)s.size()-1-i)]) palindromo = false;

    for(int i = 0; i < (int)s.size()/2; i++){
      if(!reversa.count(s[i])){
        mirror = false; break; }
      else if(reversa[s[i]] != s[((int)s.size()-1-i)]){
	mirror = false; break; }
    }

    if((int)s.size()%2 != 0 && mirror){
      int k = (int)s.size()/2;
      if(!reversa.count(s[k]))
	mirror = false;
      else if(reversa[s[k]] == s[k])
	mirror = true;
      else mirror = false;
    }

    if((int)s.size() == 1){
      if(reversa.count(s[0])){
	if(reversa[s[0]] == s[0]){
	  mirror = true;
	  palindromo = true;
	}
      }
      else { mirror = false; palindromo = true; }
    }

    
    
    if(palindromo && !mirror) cout << s << " -- is a regular palindrome." << endl << endl;
    else if(!palindromo && mirror) cout << s << " -- is a mirrored string." << endl << endl;
    else if(palindromo && mirror) cout << s << " -- is a mirrored palindrome." << endl << endl;
    else cout << s << " -- is not a palindrome." << endl << endl;
  }
  
  return 0;
}
