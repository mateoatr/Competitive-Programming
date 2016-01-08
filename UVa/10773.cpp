#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double n, d, u, v; cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> d >> v >> u;
    if(u <= 0 || v <= 0 || u <= v)
      cout << "Case " << i << ": can't determine" << endl;
    else
      cout << "Case " << i << ": " << fixed << setprecision(3) << fabs((d/sqrt(u*u-v*v))-(d/u)) << endl; 
  }
  
  return 0;
}
