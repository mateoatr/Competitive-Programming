#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
  vector<long> v; v.push_back(1); v.push_back(2);
  v.push_back(3); v.push_back(5); v.push_back(7);
  int n, index = 0; map<int,bool> valor;
  valor[1] = true; valor[2] = true; valor[3] = true;
  valor[5] = true; valor[7] = true;
  while((int)v.size() < 15000){
    for(int i = 0; i <= index; i++){
      long temp = v[index] * v[i];
      if(!valor.count(temp)){
	v.push_back(temp);
	valor[temp] = true;
      }
    }
    index++;
  }

  sort(v.begin(), v.end());
  
  while(cin >> n && n != 0){
    cout << "The " << n;
    int a = n%10, b = (n%100)/10;
    if(a == 1 && b != 1) cout << "st ";
    else if(a == 2 && b != 1) cout << "nd ";
    else if(a == 3 && b != 1) cout << "rd ";
    else cout << "th ";
    cout << "humble number is " << v[n-1] << "." << endl;
  }
  
  return 0;
}
