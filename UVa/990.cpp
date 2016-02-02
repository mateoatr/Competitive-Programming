#include <iostream>
using namespace std;

int value[1005], weight[1005], dp[1005][1005], dive[1005];

int main(){
  int t, w, n, caso = 0;

  while(cin >> t >> w){
    cin >> n;
    if(caso) cout << endl;
    caso++;
    for(int i = 1; i <= n; i++){
      cin >> weight[i];
      weight[i] = 3*w*weight[i]; 
      cin >> value[i];
    }

    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= t; j++){
	if(i == 0 || j == 0)
	  dp[i][j] = 0;
	else if(weight[i] <= j){
	  dp[i][j] = max(value[i]+dp[i-1][j-weight[i]],dp[i-1][j]);
	}else
	  dp[i][j] = dp[i-1][j];
      }
    }

    cout << dp[n][t] << endl;

    /*
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= t; j++)
	cout << dp[i][j] << " ";
      cout << endl;
    }
    */

    int i = n, j = t, k = 0;
    while(i > 0 && j >= 0){
      if(dp[i-1][j] != dp[i][j]){
	dive[k] = i; k++;
        int temp = weight[i]/w; temp /= 3;
	j -= 3*w*temp;
      }
      i--;
    }
    cout << k << endl;

    for(int i = k-1; i >= 0; i--)
      cout << (weight[dive[i]]/3)/w << " " << value[dive[i]] << endl;
  }
  
  return 0;
}
