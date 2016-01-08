#include <iostream>
using namespace std;

int main(){
  float a, b, c, n, f;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> f;
    float sum = 0;
    for(int j = 0; j < f; j++){
      cin >> a >> b >> c;
      sum += ((a/b)*c)*b;
    }
    cout << sum << endl;
  }

  return 0;
}
  
