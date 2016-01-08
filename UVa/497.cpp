#include <iostream>
#include <vector>
using namespace std;

void lis(vector<int> &a, vector<int> &b){
  vector<int> p(a.size());
  int u, v;

  b.push_back(0);

  for(size_t i = 1; i < a.size(); i++){
    if(a[b.back()] < a[i]){
      p[i] = b.back();
      b.push_back(i);
      continue;
    }

    for(u = 0, v = b.size()-1; u < v;){
      int c = (u+v)/2;
      if(a[b[c]] < a[i]) u = c+1;
      else v = c;
    }

    if(a[i] < a[b[u]]){
      if(u > 0) p[i] = b[u-1];
      b[u] = i;
    }
  }

  for(u = b.size(), v = b.back(); u--; v = p[v]) b[u] = v;
}

int main(){
  int n; cin >> n;
  string s;

  getline(cin,s);
  getline(cin,s);

  while(n--){
    vector<int> v,l;

    while(getline(cin,s)){
      if(s == "") break;
      v.push_back(stoi(s));      
    }
    
    lis(v,l);
    cout << "Max hits: " << (int)l.size() << endl;
    for(size_t i = 0; i < l.size(); i++)
      cout << v[l[i]] << endl;
    if(n > 0) cout << endl;
  }
  
  return 0;
}
