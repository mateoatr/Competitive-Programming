#include <iostream>
using namespace std;

int main(){
  int primos[1000000], n;
  for(int i = 0; i < 1000000; i++) primos[i] = 0;
  
  for(int i = 2; i < 1000000; i++){
    if(primos[i] == 0){
      primos[i] = 2;
      for(int j = i+i; j < 1000000; j+=i)
	primos[j] = 1;
    }
  }

  while(cin >> n && n != 0){
    for(int i = 0; i <= (n/2)+1; i++)
      if((primos[i] == 2) && (primos[n-i] == 2)){
	cout << n << " = " << i << " + " << n - i << endl;
	break;
      }
  }
  
  return 0;
}
