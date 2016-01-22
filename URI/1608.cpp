#include <iostream>
#include <climits>
using namespace std;

int main(){
  int t, d, b, p; cin >> t;
  
  while(t--){
    cin >> d >> b >> p;
    int ingredientes[b];

    for(int i = 0; i < b; i++)
      cin >> ingredientes[i];

    int pasteles[p];
    fill(pasteles,pasteles+p,0);
    int temp, idx, amount, min = INT_MAX, ans;
    for(int i = 0; i < p; i++){
      cin >> temp;
      for(int j = 0; j < temp; j++){
	cin >> idx >> amount;
	pasteles[i] += ingredientes[idx]*amount;
      }

      if(pasteles[i]<min){
	min = pasteles[i];
	ans = i;
      }
    }

    cout << d/pasteles[ans] << endl;
  }

  return 0;
}
