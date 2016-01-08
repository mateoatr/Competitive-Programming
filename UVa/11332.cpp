#include <iostream>
using namespace std;

int main(){
  int n, sum; string s;
  while(cin >> s && s != "0"){
    sum = 10;
    while(sum >= 10){
      sum = 0;
      for(int i = 0; i < (int)s.size(); i++)
	sum += (int)(s[i] - '0'); 
      s = to_string(sum);
    }
    cout << sum << endl; 
  }
  return 0;
}
