#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int T, a[3]; cin >> T;
  for(int i = 1; i <= T; i++){
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    cout << "Case " << i << ": " << a[1] << endl;
  }
  return 0;
}
