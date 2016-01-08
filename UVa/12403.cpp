#include <iostream>
using namespace std;

int main(){
  int T, n; cin >> T;
  long long donations = 0;
  string s;
  
  while(T--){
    cin >> s;
    if(s == "donate"){ cin >> n; donations += n; }
    else cout << donations << endl;
  }

  return 0;
}
