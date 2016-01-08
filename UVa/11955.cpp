#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  long long T, N, M; cin >> T;
  string s, a, b, n;
  
  for(int caso = 1; caso <= T; caso++){
    cin >> s; a = ""; b = ""; n = "";
    int pos = 0;
    for(int i = 1; i < (int)s.length(); i++){
      if(s[i] == '+') pos++;
      else if(s[i] == '^') pos++;
      else if(s[i] == ')') pos++;
      else if(s[i] == '(') pos++;
      else if(pos == 0) a += s[i];
      else if(pos == 1) b += s[i];
      else if(pos == 3) n += s[i];
    }
    
    N = atoi(n.c_str()); M = N;

    vector<long long> coeficientes;

    long long x = 1;
    for(int i = 0; i <= N; i++){
      coeficientes.push_back(x);
      x = x*(N-i)/(i+1);
    }
    
    cout << "Case " << caso << ": " << a;
    if(N != 1) cout << "^" << N;
    cout << "+";

    for(int i = 1; i < (int)coeficientes.size() - 1; i++){
      cout << coeficientes[i] << "*" << a;
      if(--M != 1) cout << "^" << M;
      cout << "*" << b;
      if(i != 1) cout << "^" << i;
      cout << "+";
    }

    cout << b;
    if(N != 1) cout << "^" << N;
    cout << endl;
      
  }

  return 0;
}
