#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n; cin >> n;
  unsigned long long x, ans;
  
  while(n--){
    cin >> x;
    ans = (sqrt((8*x)+1)-1)/2;
    cout << ans << endl;
  }
  
  return 0;
}
