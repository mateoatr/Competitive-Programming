#include <iostream>
#include <math.h>
#include <limits>
#include <iomanip>
using namespace std;
int main(){
  long double S, D;
  while(cin>>S>>D){
    cout << setprecision(17) << round(sqrt(8*(D+((S*(S-1))/2 - 1) + 1)-1)/2) << endl;
  }
  return 0;
}
