#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int c, n; cin >> c;

  while(c--){
    cin >> n;
    double grades[n], avg = 0;
    int aboveAvg = 0;
    for(int i = 0; i < n; i++){
      cin >> grades[i];
      avg += grades[i];
    }
    avg /= n;

    for(int i = 0; i < n; i++)
      if(grades[i] > avg)
	aboveAvg++;
    
    cout << fixed << setprecision(3) << (aboveAvg*100.00)/n << "%" << endl;
  }
  
  return 0;
}
