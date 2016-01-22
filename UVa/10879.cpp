#include <iostream>
using namespace std;

int main(){
  int n, k; cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> k; 
    cout << "Case #" << i << ": " << k << " = ";
    int c = 0;
    for(int x = 2; x <= k/2; x++){
      if(k%x == 0 && c == 0){
	if((x * (k/x)) == k){ cout << x << " * " << k/x << " = "; c++; } }
      else if(c == 1){
	if((x * (k/x)) == k){ cout << x << " * " << k/x << endl; break; } }
    }
  }
  return 0;
}
