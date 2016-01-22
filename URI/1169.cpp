#include <iostream>
#include <cstdio>
#include <cmath>
typedef long long ll;

using namespace std;
int main(){
  int t; cin >> t;
  int n;
  
  while(t--){
    cin >> n;
    printf("%lld kg\n", (ll)(pow(2,n)/12000));
  }

  return 0;
}
