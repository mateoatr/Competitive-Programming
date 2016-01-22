#include <iostream>
using namespace std;

int main(){
  long n, it, p, reversed;
  string _p, _reversed, sum;
  cin >> n;

  while(n--){
    cin >> p; it = 0;
    _reversed = "";
    while(true){
      _p = to_string(p);

      for(int i = (int)_p.size() - 1; i >= 0; i--)
	_reversed += _p[i];

      reversed = stoi(_reversed);
      sum = to_string(reversed+p);
      
      bool palindrome = true;
      for(size_t i = 0; i < sum.size()/2; i++)
	if(sum[i] != sum[(int)sum.size()-i-1])
	  palindrome = false;

      if(palindrome){
	cout << ++it << " " << sum << endl;
	break;
      }
      else{
	p = stoi(sum);
	it++;
	_reversed.clear();
      }
    }
  }

  return 0;
}
