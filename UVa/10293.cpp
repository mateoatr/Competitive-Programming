#include <iostream>
#include <map>
using namespace std;

int main(){
  string s, c;
  bool last;
  
  while(getline(cin,s)){
    c += s;
    if(c[(int)c.size()-1] != '-') c += ' ';
    if(s == "#")
      last = true;
    if(last){
      map<int,int> m; int contador = 0;
      for(int i = 0; i < (int)c.size(); i++){
	if(isalpha(c[i])) contador++;
	else if(c[i] == '.' || c[i] == ' '){ m[contador]++; contador = 0; }
      }
      if(contador != 0) m[contador]++;
      last = false;
      c.erase();

      for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
	if(it->first > 0)
	  cout << it->first << " " << it->second << endl;
      cout << endl;
    }
  }

  return 0;
}
