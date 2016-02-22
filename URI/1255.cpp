#include <iostream>
#include <cctype>
using namespace std;

int main(){
  int n; cin >> n;
  string s; getline(cin,s);

  while(n--){
    int letras[27];
    fill(letras,letras+27,0);
    getline(cin,s);
    int max = 0;
    
    for(int i = 0; i < (int)s.size(); i++){
      if(isalpha(s[i])){
	letras[(int)(tolower(s[i]) - 'a')]++;
	if(letras[(int)(tolower(s[i]) - 'a')] > max)
	  max = letras[(int)(tolower(s[i]) - 'a')];
      }
    }

    for(int i = 0; i < 27; i++)
      if(letras[i] == max) cout << (char)(i+'a');
    cout << endl;
  }

  return 0;
}
