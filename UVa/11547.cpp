#include <iostream>
using namespace std;

int main(){
  int t; cin >> t;
  long long n;
  string s;
  
  while(t--){
    cin >> n;
    n = (((((n*567)/9)+7492)*235)/47)-498; 
    s = to_string(n);
    cout << s[(int)(s.size())-2] << endl;
  }
}
