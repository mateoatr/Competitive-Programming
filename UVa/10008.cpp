#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;

bool aux(pair<int,char> a, pair<int,char> b){
  if(a.first > b.first)
    return true;
  else if(a.first == b.first){
    if(a.second < b.second)
      return true;
    return false;
  }
  return false;
}

int main(){
  int n; cin >> n;
  string s;
  getline(cin,s);
  map<char,int> m;
  
  while(getline(cin,s)){
    for(int i = 0; i < (int)s.size(); i++){
      char c = s[i];
      if(isalpha(c)) m[toupper(c)]++;
    }
  }

  vector<pair<int,char> > v;
  for(map<char,int>::iterator it = m.begin(); it != m.end(); it++){
    v.push_back(make_pair(it->second,it->first));
  }
  sort(v.begin(), v.end(), aux);

  for(int i = 0; i < (int)v.size(); i++)
    cout << v[i].second << " " << v[i].first << endl;
  
  return 0;
}
