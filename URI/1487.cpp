#include <iostream>
#include <climits>
using namespace std;

int main(){
  int n, t;
  while(cin >> n >> t && (n+t != 0)){
    int value[n], weight[n];
    for(int i = 0; i < n; i++)
      cin >> weight[i] >> value[i];

    cout << "n = " << n << " / t = " <<  t << endl;
    for(int i = 0; i < n; i++)
      cout << "w[" << i << "] = " << weight[i] << " / v[" << i << "] = " << value[i] << endl;
    
    int K[n+1][t+1];

    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= t; j++){
	if(i == 0 || j == 0)
	  K[i][j] = 0;
	else if(weight[i-1] <= j)
	  K[i][j] = max(value[i-1]+K[i-1][j-weight[i-1]], K[i-1][j]);
	else
	  K[i][j] = K[i-1][j];
      }
    }

    cout << K[n][t] << endl;

    int dp[t+1];
    fill(dp,dp+t+1,1000000);
    dp[0] = 0;

    for(int i = 0; i < n; i++){
      for(int j = 1; j <= t; j++){
	if(j-weight[i] >= 0)
	  dp[j] = min(dp[j], dp[j-weight[i]]+1);
      }
    }

    cout << "dp = " << dp[t] << endl;
  }

  return 0;
}
