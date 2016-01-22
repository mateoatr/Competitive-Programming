#include <iostream>
#include <vector>
using namespace std;

struct hora{
  string h;
  string m;
};

int main(){
  int T; cin >> T;
  string s;

  vector<hora> horas;
  for(int i = 0; i < 24; i++){
    for(int j = 0; j < 60; j++){
      s.clear();
      if(i == 0 ) s = to_string(j);
      else if(j < 10){ s = to_string(i) + "0" + to_string(j); }
      else{ s = to_string(i); s += to_string(j); }
      
      bool palindrome = true;
      for(size_t k = 0; k < s.size(); k++)
	if(s[k] != s[(int)s.size()-k-1])
	  palindrome = false;

      if(palindrome){
	hora x; 
	if(i < 10) x.h = "0";
	if(j < 10) x.m = "0";
	x.h += to_string(i);
	x.m += to_string(j);
	horas.push_back(x);
      }
    }
  }
  
  while(T--){
    cin >> s;
    hora x; x.h = s.substr(0,2); x.m = s.substr(3,2);
    hora ans; bool habemus_respuesta = false;
    for(int i = 0; i < (int)horas.size(); i++){
      if(horas[i].h == x.h){
	if(stoi(horas[i].m) > stoi(x.m)){
	    cout << horas[i].h << ":" << horas[i].m << endl;
	    habemus_respuesta = true;
	    break;
	  }
      }
      else if(stoi(horas[i].h) > stoi(x.h)){
	habemus_respuesta = true;
	cout << horas[i].h << ":" << horas[i].m << endl;
	break;
      }
    }
    
    if(!habemus_respuesta) cout << horas[0].h << ":" << horas[0].m << endl;
  }
  
  return 0;
}
