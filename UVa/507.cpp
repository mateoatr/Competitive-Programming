#include <iostream>
using namespace std;

int ruta[20002];

int main(){
  int N, r; cin >> N;
  for(int i = 1; i <= N; i++){
    cin >> r;

    int max = 0, current = 0, k = 0, pi, ui, cc = 0;
    for(int j = 1; j < r; j++){
      cin >> ruta[j];
      current += ruta[j]; k++;
      if(current < 0){ current = 0; k = 0; }

      if(max == current && k > cc){
	cc = k;
	max = current;
	ui = j + 1;
	pi = ui - k;
      }
      else if(max < current){
	cc = k; max = current;
	ui = j + 1; pi = ui - k;
      }
    }
    if(max > 0)
      cout << "The nicest part of route " << i << " is between stops " << pi << " and " << ui << endl; 
    else
      cout << "Route " << i << " has no nice parts" << endl;
  }
  return 0;
}
