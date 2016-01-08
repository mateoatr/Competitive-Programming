#include <iostream>
#include <cmath>
using namespace std;

double stirling (long long x){
  return log10(sqrt(x)*sqrt(2*M_PI)) + x*log10(x/exp(1)); }

long long f(long long n, long long k){
  if(n == k) return 1;
  double ans = stirling(n) - stirling(n-k) - stirling(k);
  return floor(ans) + 1;
}

int main(){
  double n, k;
  while(cin >> n >> k)
    cout << f(n,k) << endl;
  return 0;
}
