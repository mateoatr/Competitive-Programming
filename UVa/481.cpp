#include <iostream>
#include <vector>
using namespace std;

void lis(vector<int>&a, vector<int>&b){
  vector<int> p(a.size());
  int u, v;

  b.push_back(0);

  for(int i = 1; i < (int)a.size(); i++){
    if(a[b.back()] < a[i]){
      p[i] = b.back();
      b.push_back(i);
      continue;
    }

    for(u = 0, v = b.size() - 1; u < v;){
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
  vector<int> v;
  int n;

  while(cin >> n)
    v.push_back(n);

  vector<int> l;

  lis(v,l);

  cout << (int)l.size() << endl << "-" << endl;
  for(int i = 0; i < (int)l.size(); i++)
    cout << v[l[i]] << endl;

  return 0;
}
