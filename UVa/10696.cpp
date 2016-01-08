#include <iostream>
using namespace std;

long f91(int N){
  if(N <= 100) return f91(f91(N+11));
  return N - 10;
}

int main(){
  int n;
  while(cin >> n && n != 0)
    cout << "f91(" << n << ") = " << f91(n) << endl;
  return 0;
}
