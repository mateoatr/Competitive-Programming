#include <iostream>
using namespace std;

int main(){
  int n;
  long long fib[51];
  fib[0] = 1;
  fib[1] = 1;
  for(int i = 2; i < 51; i++)
    fib[i] = fib[i-2]+fib[i-1];
  while(cin>>n && n != 0)
    cout << fib[n] << endl;
  return 0;
}
