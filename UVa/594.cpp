#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin >> n)
    cout << n << " converts to " << (((n&0xFF)<<24)+((n&0xFF00)<<8)+((n&0xFF0000)>>8)+((n>>24)&0xFF)) << endl;
  return 0;
}
