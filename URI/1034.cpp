#include <iostream>
#include <climits>
using namespace std;

int minCoins(int coins[], int N, int M){
  int table[M+1];

  table[0] = 0;

  for(int i = 1; i <= M; i++)
    table[i] = INT_MAX;

  for(int i = 1; i <= M; i++){
    for(int j = 0; j < N; j++)
      if(coins[j] <= i){
	int sub_res = table[i-coins[j]];
	if(sub_res != INT_MAX && sub_res + 1 < table[i])
	  table[i] = sub_res + 1;
      }
  }

  return table[M];
}

int main(){
  int T, N, M; cin >> T;

  while(T--){
    cin >> N >> M;
    int monedas[N];

    for(int i = 0; i < N; i++)
      cin >> monedas[i];

    cout << minCoins(monedas, N, M) << endl;
  }

  return 0;
}
