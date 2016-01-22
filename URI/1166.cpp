#include <iostream>
using namespace std;

int main(){
  int t, n, add = 2; cin >> t;
  int ans[52]; ans[1] = 1;
  bool u = false;

  for(int i = 2; i <= 50; i++){
    if(u){
      add += 2;
      ans[i] = ans[i-1] + add;
      u = false;
    }
    else{
      ans[i] = ans[i-1] + add;
      u = true;
    }
  }
  
  while(t--){
    cin >> n;
    cout << ans[n] << endl;
  }
  
  return 0;
}
