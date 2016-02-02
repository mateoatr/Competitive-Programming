#include <iostream>
#include <vector>
using namespace std;

int dp[1305][15];

int main(){
  int n, k;
  vector<int> primos;
  vector<bool> sieve(1121,true);

  for(int i = 2; i <= 1120; i++){
    if(sieve[i]){
      primos.push_back(i);
      for(int j = i+i; j <= 1120; j+=i)
	sieve[j] = false;
    }
  }

  dp[0][0] = 1;
  for(int i = 0; i < (int)primos.size(); i++)
    for(int j = 1210; j >= primos[i]; j--)
      for(int k = 1; k <= 14; k++)
	dp[j][k] += dp[j-primos[i]][k-1];

  for(int i = 0; i <= 100; i++){
    for(int j = 1; j <= 14; j++)
      cout << dp[i][j] << " ";
    cout << endl;
  }
  

  while(cin >> n >> k && (n+k != 0))
    cout << dp[n][k] << endl;
  
  return 0;
}
