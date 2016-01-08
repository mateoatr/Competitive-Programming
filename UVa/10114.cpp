#include <iostream>
using namespace std;

int main(){
  int duration, n, a;
  double loan, downpay;

  while(cin >> duration >> downpay >> loan >> n && duration > 0){
    double dep[duration+1];
    fill(dep,dep+duration+1,0);
    for(int i = 0; i < n; i++)
      cin >> a, cin >> dep[a];
    double debe = loan/duration, vale = (loan+downpay)*(1-dep[0]), actual = dep[0];

    int ans = 0;
    for(int i = 1; i <= duration; i++){
      if(loan < vale){
	ans = i-1; break;
      }
      loan -= debe;
      if(dep[i] != 0) actual = dep[i];
      vale *= (1-actual);

      if(i == duration) ans = i;
    }
    cout << ans;
    if(ans == 1) cout << " month" << endl;
    else cout << " months" << endl;
  }
  
  return 0;
}
