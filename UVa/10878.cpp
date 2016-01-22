#include <iostream>
#include <cmath>
using namespace std;

int main(){
  string s;

  while(getline(cin,s)){
    int exponente = 0, k = 0;
    for(int i = (int)s.size() - 1; i >= 0; i--){
      if(s[i] == ' ' || s[i] == 'o'){
	if(s[i] == 'o') k += pow(2,exponente);
	exponente++;
      }
    }
    if(k != 0) cout << (char)k;
    exponente = 0; k = 0;
  }
  return 0;
}
