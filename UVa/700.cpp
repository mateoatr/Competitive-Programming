#include <iostream>
#include <set>
using namespace std;

int main(){
  int n, caso = 0;

  while(cin >> n && n != 0){
    int y[n], a[n], b[n], dif[n], emp = 0;
    
    for(int i = 0; i < n; i++){
      cin >> y[i] >> a[i] >> b[i];
      dif[i] = b[i] - a[i];
      emp = max(emp,y[i]);
    }

    set<int> Set; bool acabo = true;
    for(int i = emp; i < 10000; i++){
      for(int j = 0; j < n; j++)
	Set.insert((i-y[j])%dif[j]);

      if((int)Set.size() == 1){
	cout << "Case #" << ++caso << ":" << endl << "The actual year is " << i << "." << endl << endl;
	acabo = false;
	break;
      }

      Set.clear();
    }

    if(acabo) cout << "Case #" << ++caso << ":" << endl << "Unknown bugs detected." << endl << endl;
  }
  
  return 0;
}
