#include <iostream>
using namespace std;
typedef long double ld;

int main(){
  ld a, b, n, m, p, q;
  while(cin >> a >> b){
    cin >> n; m = 1;
    for(int i = 1;i < 30; i++){
      p = (a+1)*i; q = b*i;
      cout << "p = " << p << " / q = " << q << "| diferencia = " << p/q - a/b << endl;
    }
    /*
    while(true){
      p *= m; q *= m;
      cout << "p = " << p << " / q = " << q << "| diferencia = " << p/q - a/b << endl;
      if(p/q > a/b && (p/q - a/b <= n)) break;
      else m++;
    }
    */
    cout << p << " " << q << endl;
  }
  return 0;
}
