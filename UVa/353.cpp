#include <iostream>
#include <map>
using namespace std;

//  Modified Mancher's algorithm
void palindrome(string s){
  map<string,int> m;
  int n = s.size();

  int R[2][n+1];
  s = "@" + s + "#";

  for(int i = 0; i <= 1; i++){
    int rp = 0;
    R[i][0] = 0;

    int j = 1;
    while(j <= n){
      while(s[j-rp-1] == s[i+j+rp])
	rp++;
      R[i][j] = rp;
      int k = 1;
      while((R[i][j-k] != rp-k) && (k < rp)){
	R[i][j+k] = min(R[i][j-k],rp-k);
	k++;
      }
      rp = max(rp - k,0);
      j += k;
    }
  }

  s = s.substr(1,n);

  m[string(1,s[0])] = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 0; j <= 1; j++)
      for(int rp = R[j][i]; rp > 0; rp--)
	m[s.substr(i-rp-1,2*rp+j)] = 1;
    m[string(1,s[i])] = 1;
  }

  cout << "The string '" << s << "' contains " << (int)m.size()-1 << " palindromes." << endl;
}

int main(){
  string s;
  while(cin>>s)
    palindrome(s);
  return 0;
}
