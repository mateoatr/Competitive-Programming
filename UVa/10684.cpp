#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin >> n && n != 0){
    int array[n];
    for(int i = 0; i < n; i++)
      cin >> array[i];

    int max_subarray = array[0];
    int current_max = array[0];

    if(n > 1){
      for(int i = 1; i < n; i++){
      current_max = max(array[i], current_max+array[i]);
      max_subarray = max(max_subarray, current_max);
      }
    }

    if(max_subarray <= 0)
      cout << "Losing streak." << endl;
    else
      cout << "The maximum winning streak is " << max_subarray << "." << endl;
  }

  return 0;
}
