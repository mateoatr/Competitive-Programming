#include <iostream>
#include <map>
#include <deque>
using namespace std;

int main(){
  int t, n; cin >> t;

  while(t--){
    cin >> n;
    map<int,bool> m;
    deque<int> d;
    int x, c = 0, a = 0;
    
    for(int i = 0; i < n; i++){
      cin >> x;
      if(m[x] != true){
	m[x] = true;
	d.push_front(x);
	c++;
	a = max(a,c);
      }
      else{
	a = max(a,c);
	int r = 0;
	d.push_front(x);
	c++;
	while(true){
	  int temp = d.back();
	  m[temp] = false;
	  d.pop_back();
	  c--;
	  if(temp == d.front()){
	    m[temp] = true;
	    break;
	  }
	}
      }
    }
    if(c > a) a = c;
    cout << a << endl;
  }
  
  return 0;
}
