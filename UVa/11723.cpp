#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int caso = 0;
  double n, r;
  while(cin >> r >> n && (n+r != 0)){
    int ans = ceil((r/n)-1);
    if(ans > 26) cout << "Case " << ++caso << ": impossible" << endl;
    else cout << "Case " << ++caso << ": " << ans << endl;
  }
  return 0;
}
