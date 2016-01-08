#include <iostream>
using namespace std;

int main(){
  long long fib[55];
  fib[0] = 1;
  fib[1] = 1;

  for(int i = 2; i < 55; i++)
    fib[i] = fib[i-2] + fib[i-1];

  int caso, x; cin >> caso;
  for(int i = 1; i <= caso; i++){
    cin >> x;
    cout << "Scenario #" << i << ":" << endl << fib[x+1] << endl << endl;
  }

  return 0;
}
