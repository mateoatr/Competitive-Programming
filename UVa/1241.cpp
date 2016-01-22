#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
  int T, N, M; cin >> T;

  while(T--){
    cin >> N >> M;
    int y, a = 0;
    
    vector<int> v(pow(2,N),1);
    for(int i = 0; i < M; i++){
      cin >> y;
      v[y-1] = 0;
    }
    
    while(N){ 
      int idx = 0, r;
      vector<int> b(pow(2,N)/2);
      for(int i = 0; i < pow(2,N); i+=2, idx++){
        if(v[i]^v[i+1]) a++;
	if(v[i]|v[i+1]) r = 1; else r = 0;
        b[idx] = r;
      }
      v.clear();
      v = b;
      N--;
    }
    cout << a << endl;
  }
  
  return 0;
}
