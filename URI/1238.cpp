#include <iostream>
using namespace std;

string ans(string a, string b){
  int idx_a = 0, max_a = (int)a.size()-1;
  int idx_b = 0, max_b = (int)b.size()-1;
  string r;
  
  while(idx_a + idx_b <= max_a + max_b + 1){
    if(idx_a <= max_a){ r += a[idx_a]; idx_a++; }
    if(idx_b <= max_b){ r += b[idx_b]; idx_b++; }
  }

  return r;
}

int main(){
  int t; string a, b;
  cin >> t;

  while(t--){
    cin >> a >> b;
    cout << ans(a,b) << endl;
  }
  
  return 0;
}
