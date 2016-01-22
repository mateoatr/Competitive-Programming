#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main(){
  string s;
  char t;
  vector<map<char, int> > v;
  
  while(getline(cin,s) && s != "#"){
    map<char,int> mapa;
    for(size_t i = 0; i < s.size(); i++)
      mapa[s[i]]++;
    v.push_back(mapa);
  }
  
  while(getline(cin,s) && s != "#"){
    map<char,int> comparar;
    int r = 0;
    istringstream iss(s);
    while(iss >> t)
      comparar[t]++;
    for(int i = 0; i < (int)v.size(); i++){
      bool ok = true;
      for(map<char,int>::iterator it = v[i].begin(); it != v[i].end(); it++){
	if(!(it->second <= comparar[it->first]))
	  ok = false;
      }
      if(ok) r++;
    }
    cout << r << endl;
  }
  
  return 0;
}
