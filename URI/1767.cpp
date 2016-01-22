#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int t, n; cin >> t;

  while(t--){
    cin >> n;
    int valor[n], peso[n];
    for(int i = 0; i < n; i++)
      cin >> valor[i] >> peso[i];

    int K[n+1][51], w = 0;
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= 50; j++){
	if(i == 0 || j == 0)
	  K[i][j] = 0;
	else if(peso[i-1] <= j){
	  K[i][j] = max(valor[i-1]+K[i-1][j-peso[i-1]],K[i-1][j]);
	  w = abs(peso[i-1] - w);
	}
	else{
	  K[i][j] = K[i-1][j];
	  
	}
      }
    }

    cout << w << endl;
  }


  
  return 0;
}
