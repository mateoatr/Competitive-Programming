#include <iostream>
using namespace std;

int main(){
  int a, b, c, d, x;
  while(cin >> a >> b >> c >> d && (a+b+c+d != 0)){
    x = 120;
    if(a > b) x += (a - b); else x += (40 + a - b);
    if(c > b) x += c - b; else x += (40 + c - b);
    if(c > d) x += c - d; else x += (40 + c - d);
    cout << x*9 << endl;
  }
  return 0;
}
