#include <iostream>
using namespace std;

int ans;

int fib(int x){
  ans++;
  if(x == 0) return 0;
  if(x == 1) return 1;
  return fib(x-1)+fib(x-2);
}

int main(){
  int N, X; cin >> N;
  for(int i = 1; i <= N; i++){
    cin >> X;
    ans = 0;
    cout << "fib(" << X << ") = " << --ans << " calls = " << fib(X) << endl; 
  }
  return 0;
}
