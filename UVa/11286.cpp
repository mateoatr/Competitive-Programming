#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int t;

  while(cin >> t && t != 0){
    string s;
    map<string,int> frosh;
    for(int i = 0; i < t; i++){
      s.clear();
      vector<int> v(5);

      for(int j = 0; j < 5; j++)
        cin >> v[j];

      sort(v.begin(), v.end());

      for(int j = 0; j < 5; j++)
	s += to_string(v[j]);

      if(!frosh.count(s)) frosh[s] = 1;
      else frosh[s]++;
    }

    int r = 0, ans = 0;
    for(map<string,int>::iterator it = frosh.begin(); it != frosh.end(); ++it){
      if(it->second > r){
	r = it->second;
	ans = it->second;
      }
      else if(it->second == r)
	ans += it->second;
    }

    cout << ans << endl;
  }
  
  return 0;
}
