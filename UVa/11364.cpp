#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int abs(int a){
  return (a > 0) ? a : -a;
}

int main(){
  int n, k, x; cin >> n;
  vector<int> s;
  while(n--){
    cin >> k;
    s.resize(k);
    for(int i = 0; i < k; i++)
      cin >> s[i];
    sort(s.begin(), s.end());
    cout << (s.back() - s[0])*2 << endl;
    s.clear();
  }
  return 0;
}
