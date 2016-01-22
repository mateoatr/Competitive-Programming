#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
  int n, c; cin >> c;
  map<int,vector<int> > numeros;
  vector<int> v(10); v[1] = 1;
  numeros[1] = v;
  for(int i = 2; i <= 10000; i++){
    string s = to_string(i);
    for(int j = 0; j < (int)s.size(); j++){
      v[(int)(s[j] - '0')]++;
    }
    numeros[i] = v;
  }
  
  while(c--){
    cin >> n;
    v = numeros[n];
    for(int i = 0; i < 10; i++){
      cout << v[i];
      if(i != 9) cout << " ";
    }
    cout << endl;
  }
  
  return 0;
}
