#include <iostream>
using namespace std;

long josephus(long n, long k){
  if(n == 1) return 0;
  return (josephus(n-1,k)+k)%n;
}

int main(){
  int t; cin >> t;
  long n, k;
  
  for(int i = 1; i <= t; i++){
    cin >> n >> k;
    cout << "Case " << i << ": " << josephus(n,k)+1 << endl;
  }

  return 0;
}
