#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  int n; string s;
  while(cin >> n >> s){
    int r = 0;
    string ans;
    map<string,int> m;
    for(int i = 0; i < (int)s.size(); i++){
      if(i+n <= (int)s.size()){
	m[s.substr(i,n)]++;
	if(m[s.substr(i,n)] > r){ r = m[s.substr(i,n)]; ans = s.substr(i,n); }
      }
    }
    cout << ans << endl;
  }

  return 0;
}
