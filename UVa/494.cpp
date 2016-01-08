#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(){
  string s;
  while(getline(cin,s)){
    bool a = true; int r = 0;
    for(int i = 0; i < (int)s.size(); i++){
      if(isalpha(s[i])){
	if(a){
	  r++; a = false;
	}
      }
      else
	a = true;
    }
    cout << r << endl;
  }
  return 0;
}
