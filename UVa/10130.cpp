#include <iostream>
using namespace std;

int dp[1050][1050];

int main(){
  int t, n, p, w, g, mw, m; cin >> t;
  int weight[1050], value[1050];
  
  while(t--){
    cin >> n; m = 0;
    for(int i = 1; i <= n; i++)
      cin >> value[i] >> weight[i];
    cin >> g;
    for(int i = 1; i <= g; i++){
      cin >> mw;

      for(int j = 0; j <= n; j++){
	for(int k = 0; k <= mw; k++){
	  if(j == 0 || k == 0)
	    dp[j][k] = 0;
	  else if(weight[j] <= k){
	    dp[j][k] = max(value[j]+dp[j-1][k-weight[j]],dp[j-1][k]);
	  }else
	    dp[j][k] = dp[j-1][k];
	}
      }

      m += dp[n][mw];
    }

    cout << m << endl;
  }

  return 0;
}
