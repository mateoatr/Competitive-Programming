#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s, t;

  while(getline(cin,s)){
    getline(cin,t);
    map<char,int> m_s;
    map<char,int> m_t;
    vector<char> v;

    for(int i = 0; i < (int)s.size(); i++)
      m_s[s[i]]++;
    
    for(int i = 0; i < (int)t.size(); i++)
      m_t[t[i]]++;

    for(map<char,int>::iterator it = m_s.begin(); it != m_s.end(); it++)
      while(m_t[it->first] > 0 && m_s[it->first] > 0){
	v.push_back(it->first);
	m_t[it->first]--; m_s[it->first]--;
      }
    sort(v.begin(), v.end());
    for(int i = 0; i < (int)v.size(); i++)
      cout << v[i];
    cout << endl;
  }

  return 0;
}
