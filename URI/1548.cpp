#include <iostream>
#include <algorithm>
using namespace std;

bool s(int i, int j){
  return i > j; }

int main(){
  int t, m; cin >> t;

  while(t--){
    cin >> m;
    int estudiantes[m], orden[m], ans=0;
    for(int i = 0; i < m; i++){
      cin >> estudiantes[i]; orden[i] = estudiantes[i]; }
    sort(orden,orden+m,s);
    for(int i = 0; i < m; i++)
      if(estudiantes[i] != orden[i])
	ans++;
    cout << m-ans << endl;
  }

  return 0;
}
