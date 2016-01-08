#include <iostream>
using namespace std;

int josephus(int n, int k){
  if(n == 1) return 0;
  return (josephus(n-1,k)+k)%n;
}

int main(){
  int n, k; cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> k;
    int x = 0, y;

    while(true){
      y = josephus(k,2)+1;
      x++;
      if(y == k) break;
      else k = y;
    }
    cout << "Case " << i << ": " << --x << " " << y << endl;
  }
  
  return 0;
}
