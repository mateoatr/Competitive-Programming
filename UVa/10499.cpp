#include <iostream>
using namespace std;

int main(){
  long long n;
  while(cin >> n && n >= 0){
    if(n == 0 || n == 1) cout << "0%" << endl;
    else cout << 25*n << "%" << endl;
  }
  return 0;
}
