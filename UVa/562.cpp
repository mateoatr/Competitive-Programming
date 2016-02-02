#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n, m, W, t, K[50005], monedas[105]; cin >> n;
  
  while(n--){
    cin >> m; t = 0;
    for(int i = 1; i <= m; i++){
      cin >> monedas[i]; t += monedas[i]; }

    W = t/2;
    for(int i = 0; i <= W; i++) K[i][0] = 0;

    for(int i = 1; i <= m; i++){
      for(int j = 0; j <= W; j++){
	if(monedas[i] <= j)
	  K[j][i] = max(monedas[i]+K[j-monedas[i]][i-1],K[j][i-1]);
	else
	  K[j][i] = K[j][i-1];
      }
    }

    cout << t - (2*K[W][m]) << endl;
  }
  
  return 0;
}
