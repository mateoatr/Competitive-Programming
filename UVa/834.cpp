#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int n, m, p, q, r = 0;

  while(cin >> n >> m){
    vector<int> v;
    while(true){
      r = floor(n/m);
      v.push_back(r);
      p = n - (r*m);
      if(p == 0) break;
      q = m;
      n = q;
      m = p;
    }

    if(v.size() == 1) cout << "[" << v[0] << "]" << endl;
    else{
      for(int i = 0; i < (int)v.size(); i++){
	if(i == 0) cout << "[" << v[0] << ";";
	else if(i != (int)v.size() - 1) cout << v[i] << ",";
	else cout << v[i] << "]" << endl;
      }
    }
    v.clear();
  }
  
  return 0;
}
