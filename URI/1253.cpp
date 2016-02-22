#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int test, cipher; cin >> test;
  string text;

  while(test--){
    cin >> text >> cipher;
    for(int i = 0; i < (int)text.size(); i++){
      if(((int)(((text[i] - 'A' - cipher))%26)+'A') < 'A') cout << (char)((int)((text[i] - 'A' - cipher)%26)+'A'+26);
      else cout << (char)((int)abs((text[i] - 'A' - cipher)%26)+'A'); }
    cout << endl;
  }

  return 0;
}
