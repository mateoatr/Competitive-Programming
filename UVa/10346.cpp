#include <iostream>
using namespace std;

int main(){
  int n, k;

  while(cin >> n >> k){
    int r = n;
    while(n >= k){
      int temp = n/k;
      r += temp;
      n %= k;
      n += temp;
    }
    cout << r << endl;
  }
  
  return 0;
}
