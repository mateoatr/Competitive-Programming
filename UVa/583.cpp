#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> primos;
  vector<bool> criba(46500,false);
  for(int i = 2; i < 46500; i++){
    if(criba[i] == false){
      primos.push_back(i);
      for(int j = i*2; j < 46500; j+=i)
	criba[j] = true;
    }
  }
  int n; bool np;
  while(cin >> n && n != 0){
    np = true;
    if(n<0){
      cout << n << " = -1";
      n *= -1;
      for(int i = 0; i < (int)primos.size(); i++){
        if(n%primos[i] == 0){
          cout << " x " << primos[i];
          n /= primos[i]; i = 1000000; np = false;
	}
      }
      if(np){
	cout << " x " << n;
	n = 1;
      }
    }
    else{
      cout << n << " =";
      for(int i = 0; i < (int)primos.size(); i++){
	if(n%primos[i] == 0){
	  cout << " " << primos[i];
	  n /= primos[i]; i = 1000000; np = false;
	}
      }
      if(np){
	cout << " " << n;
	n = 1;
      }
    }
    while(n != 1){
      np = true;
      for(int i = 0; i < (int)primos.size(); i++){
	while(n%primos[i] == 0){
	  cout << " x " << primos[i];
	  n /= primos[i]; np = false;
	}
      }
      if(np == true && n != 1){ cout << " x " << n; n = 1; }
    } cout << endl;
  }
  return 0;
}
