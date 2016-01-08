#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  string s;
  double km = 0, af = 0, h_f = 0, hf = 0, a;
  
  while(getline(cin,s)){
    bool cambio = true;
    istringstream ss(s);
    string p, t, x;
    
    while(ss >> p){
      cambio = !cambio;
      if(!cambio){
	hf = stod(p.substr(0,2)) + stod(p.substr(3,2))/60 + stod(p.substr(6,2))/3600;
	x = 
	t = p;
      }
      else{
	a = af;
	af = stod(p);
      }
    }   

    if(cambio) km += (a * (hf - h_f));
    else{
      km += (af * (hf - h_f));
      cout << t << " " << fixed << setprecision(2) << km << " km" << endl;
    }
    
    h_f = hf;
  }
  
  return 0;
}
