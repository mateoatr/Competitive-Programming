#include <iostream>
using namespace std;

int main(){
  /*
  int n = 0;
  for(long j = 1; j < 1000000000000; j++){
    long i = j;
    while((i%2==0)||(i%3==0)||(i%5==0)){
      if(i%2==0) i/=2; else if(i%3==0) i/=3;
      else i/=5;
    }
    if(i == 1){
      cout << j << endl;
      n++;
      if(n == 1500)
	return 0;
    }
  }
  */
  cout << "The 1500'th ugly number is 859963392." << endl;
  return 0;
}
