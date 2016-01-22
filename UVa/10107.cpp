#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
  ll n;
  vector<ll> v;
  
  while(cin >> n){
    v.push_back(n);
    sort(v.begin(),v.end());
    if((int)v.size()%2) cout << v[((int)v.size()-1)/2] << endl;
    else cout << (ll)(v[(int)v.size()/2]+v[((int)v.size()/2)-1])/2 << endl;
  }
  
  return 0;
}
