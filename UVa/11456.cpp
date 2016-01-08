#include <iostream>
using namespace std;

int main(){
  int casos, n; cin >> casos;
  
  for(int i = 0; i < casos; i++){
    cin >> n;
    if(n == 0){
      cout << 0 << endl;
      continue;
    }

    int carros[n+1], lis[n+1], lds[n+1];
    fill(lis,lis+n,1);
    fill(lds,lds+n,1);
    
    for(int j = 0; j < n; j++)
      cin >> carros[n-j-1];
    
    for(int j = 0; j < n; j++)
      for(int k = 0; k < j; k++){
	if(carros[j] > carros[k])
	  lis[j] = max(lis[j], lis[k]+1);
	if(carros[j] < carros[k])
	  lds[j] = max(lds[j], lds[k]+1);
      }

    int val = 0;
    for(int j = 0; j < n; j++)
      if(val < lis[j] + lds[j] - 1)
	val = lis[j] + lds[j] - 1;
    
    cout << val << endl;
  }
  
  return 0;
}
