#include <iostream>
using namespace std;

int main(){
  int n; string s; bool first = true;
  while(cin >> n && n != 0){
    if(first) first = false;
    else cout << endl;
    
    string arr[n]; int max = -1;
    for(int i = 0; i < n; i++){
      cin >> arr[i];
      if((int)arr[i].size() > max) max = (int)arr[i].size();
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < max - (int)arr[i].size(); j++)
	cout << " ";
      cout << arr[i] << endl;
    }
  }

  return 0;
}
