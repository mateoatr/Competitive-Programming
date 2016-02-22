#include <iostream>
using namespace std;

int main(){
  int n, l; string s;
  cin >> n;

  while(n--){
    int ans = 0;
    cin >> l;
    for(int i = 0; i < l; i++){
      cin >> s;
      for(int j = 0; j < (int)s.size(); j++)
	ans += (int)(s[j]-'A') + i + j;
    }
    cout << ans << endl;
  }
  
  return 0;
}
