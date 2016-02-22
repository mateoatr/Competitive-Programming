#include <iostream>
using namespace std;

int main(){
  int n, m;
  
  while(cin >> n >> m && (n+m != 0)){
    int p = max(n,m), q = min(n,m), r = 0;
    string string_p = to_string(p), string_q = to_string(q);
    int arrayMayor[(int)string_p.size()], arrayMenor[(int)string_q.size()];
    int aux[(int)string_p.size()+10];
    fill(aux,aux+(int)string_p.size()+10,0);

    
    for(int i = 0; i < (int)string_p.size(); i++)
      arrayMayor[i] = (int)string_p[i]-'0';
    for(int i = 0; i < (int)string_q.size(); i++)
      arrayMenor[i] = (int)string_q[i]-'0';

    int j = (int)string_q.size()-1;
    bool ok = true;
    for(int i = (int)string_p.size()-1; i >= 0; i--){
      int temp = 0;
      if(ok) temp = arrayMenor[j];
      if(temp + arrayMayor[i] + aux[i+2] > 9){
	aux[i+1] = 1;
	r++;
      }
      j--;
      if(j < 0) ok = false;
    }

    if(r == 0) cout << "No carry operation." << endl;
    else if(r == 1) cout << "1 carry operation." << endl;
    else cout << r << " carry operations." << endl;
  }
  
  return 0;
}
