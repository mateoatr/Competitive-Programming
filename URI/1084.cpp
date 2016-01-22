#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int D, N;
  
  while(cin >> N >> D && (N + D != 0)){
    int numeros[N];
    char digitos[N];
    
    for(int i = 0; i < N; i++){
      cin >> digitos[i];
      numeros[i] = (int)(digitos[i] - '0');
    }

    sort(numeros, numeros+N);

    for(int i = 0; i < D; i++)
      for(int j = 0; j < N; j++)
	if((int)(digitos[j] - '0') == numeros[i]){
	  digitos[j] = '@';
	  break;
	}

    for(int i = 0; i < N; i++)
      if(digitos[i] != '@')
	cout << digitos[i];
    cout << endl;
  }

  return 0;
}
