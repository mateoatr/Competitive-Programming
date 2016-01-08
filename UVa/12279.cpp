#include <iostream>
using namespace std;

int main(){
  int N, x, caso = 0;

  while(cin >> N && N != 0){
    int treat = 0, reason = 0;
    for(int i = 0; i < N; i++){
      cin >> x;
      if(x == 0) treat++;
      else reason++;
    }
    cout << "Case " << ++caso << ": " << reason - treat << endl;
  }
  
  return 0;
}
