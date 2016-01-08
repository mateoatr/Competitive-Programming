#include <iostream>
using namespace std;

int main(){
  int a, b, n, x, y;
  while(cin >> n){
    cin >> x >> y;
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      if(a == x || b == y) cout << "divisa" << endl;
      else if(a > x && b > y) cout << "NE" << endl;
      else if(a < x && b > y) cout << "NO" << endl;
      else if(a > x && b < y) cout << "SE" << endl;
      else cout << "SO" << endl;
    }
  }

  return 0;
}
