#include <iostream>
using namespace std;

int main(){
  int t, n, res, load; cin >> t;

  while(t--){
    cin >> n;
    int value[n];
    int weight[n];

    for(int i = 0; i < n; i++)
      cin >> value[i] >> weight[i];
    cin >> load >> res;

    int K[n+1][load+1];
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= load; j++){
	if(i == 0 || j == 0)
	  K[i][j] = 0;
	else if(weight[i-1] <= j)
	  K[i][j] = max(value[i-1] + K[i-1][j - weight[i-1]], K[i-1][j]);
	else
	  K[i][j] = K[i-1][j];
      }
    }

    if(K[i][load] >= res)
      cout << "Missao completada com sucesso" << endl;
    else
      cout << "Falha na missao" << endl;
  }

  return 0;
}
