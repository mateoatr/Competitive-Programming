#include <iostream>
#include <map>
using namespace std;

int main(){
  int n, val; cin >> n;
  int estudiante[n+1];
  map<int,int> mapa;
  
  for(int i = 1; i <= n; i++){
    cin >> val;
    mapa[i] = val;
  }

  while(cin >> val){
    estudiante[val] = 1;
    for(int i = 2; i <= n; i++){
      cin >> val;
      estudiante[val] = i;
    }

    for(int i = 1; i <= n; i++) estudiante[i] = mapa[estudiante[i]];

    int lis[n+1]; int ans = 0;
    for(int i = 0; i <= n; i++) lis[i] = 1;

    for(int i = 2; i <= n; i++){
      for(int j = 1; j < i; j++)
	if(estudiante[i] > estudiante[j])
	  lis[i] = max(lis[i], lis[j] + 1);
      if(lis[i] > ans) ans = lis[i];
    }

    cout << ans << endl;
  }
  
  return 0;
}
