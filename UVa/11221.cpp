#include <iostream>
#include <cmath>
using namespace std;

bool perfect_square(int n){
  int root(round(sqrt(n)));
  return n == root * root;
}

int main(){
  int caso; cin >> caso;
  string s; getline(cin,s);
  for(int i = 1; i <= caso; i++){
    getline(cin,s);

    string p = "";
    for(size_t j = 0; j < s.size(); j++)
      if(isalpha(s[j]))
	p += s[j];
    
    bool palindrome = true;
    for(size_t j = 0; j < p.size()/2; j++)
      if(p[j] != p[(int)p.size()-j-1]){
	palindrome = false;
	break;
      }

    bool r = true;
    if(palindrome){
      if(perfect_square((int)p.size())){
	int n = sqrt((int)p.size()), idx = 0;
	char cuadrado[n][n];
	bool ok = true;
	string t = "";
	
	for(int j = 0; j < n; j++)
	  for(int k = 0; k < n; k++)
	    cuadrado[j][k] = p[idx], idx++;

	for(int j = 0; j < n; j++)
	  for(int k = 0; k < n; k++)
	    t += cuadrado[k][j];

	for(size_t j = 0; j < t.size()/2; j++)
	  if(t[j] != t[(int)t.size()-j-1]){
	    ok = false;
	    break;
	  }

	if(!ok) r = false;
      }
      else r = false;
    }
    else r = false;

    cout << "Case #" << i << ":" << endl;
    if(r) cout << sqrt((int)p.size()) << endl;
    else cout << "No magic :(" << endl;
  }

  return 0;
}
