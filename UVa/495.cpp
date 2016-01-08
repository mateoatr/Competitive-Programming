#include <iostream>
using namespace std;

int main(){
  int n;
  unsigned long long fib[5001];
  fib[0] = 0; fib[1] = 1;
  for(int i = 2; i < 5001; i++)
    fib[i] = fib[i-1]+fib[i-2];
  while(cin >> n)
    cout << "The Fibonacci number for " << n << " is " << fib[n] << endl;
  return 0;
}
