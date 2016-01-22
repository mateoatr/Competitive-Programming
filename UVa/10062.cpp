#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool aux(pair<int,int> a, pair<int,int> b){
  if(a.second < b.second)
    return true;
  else if(a.second == b.second){
    if(a.first > b.first)
      return true;
    else
      return false;
  }
  return false;
}

int main(){
  string s;
  bool old = false;
  
  while(getline(cin,s)){
    if(old) cout << endl;
    map<int,int> m;
    for(int i = 0; i < (int)s.size(); i++)
      m[(int)s[i]]++;
    vector<pair<int,int> > v;
    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
      v.push_back(make_pair(it->first, it->second));
    sort(v.begin(), v.end(), aux);
    for(int i = 0; i < (int)v.size(); i++)
      cout << v[i].first << " " << v[i].second << endl;
    old = true;
  }

  return 0;
}
