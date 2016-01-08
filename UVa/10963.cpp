#include <iostream>
using namespace std;

int main(){
  int test, W, a, b, c; cin >> test;

  while(test--){
    cin >> W;
    bool arriba = true, ans = true;

    while(W--){
      cin >> a >> b;
      if(arriba){
	c = a - b;
	arriba = false;
      }
      else{
	if(a - b != c)
	  ans = false;
	arriba = true;
      }
    }
    
    if(ans) cout << "yes" << endl;
    else cout << "no" << endl;
    
    if(test) cout << endl;
  }

  return 0;
}
