#include <iostream>
#include <map>
using namespace std;

int main(){
  string s; int t; cin >> t;
  map<char,int> digitos;
  digitos['1'] = 2; digitos['2'] = 5; digitos['3'] = 5;
  digitos['4'] = 4; digitos['5'] = 5; digitos['6'] = 6;
  digitos['7'] = 3; digitos['8'] = 7; digitos['9'] = 6;
  digitos['0'] = 6;
  while(t--){
    cin >> s;
    int ans = 0;
    for(size_t i = 0; i < s.size(); i++)
      ans += digitos[s[i]];
    cout << ans << " leds" << endl;
  }
  return 0;
}
