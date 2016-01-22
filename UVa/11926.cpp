#include <iostream>
using namespace std;

int main(){
  int n, m, a, b, r;

  while(cin >> n >> m && (n + m != 0)){
    int actividades[1000005] = {0};
    bool p = true;

    while(n--){
      cin >> a >> b;
      for(int i = a+1; i <= b; i++){
	if(actividades[i] == 1) p = false;
	actividades[i]++;
      }
    }

    while(m--){
      cin >> a >> b >> r;
      while(a<1000000){
	for(int i = a+1; i <= b; i++){
	  if(actividades[i] == 1) p = false;
	  actividades[i]++;
	}
	b = min(b+r,1000000);
	a += r;
      }
    }
    
    if(p) cout << "NO CONFLICT" << endl;
    else cout << "CONFLICT" << endl;
  }

  return 0;
}
