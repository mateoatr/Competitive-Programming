#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, caso = 1;
  while(cin >> n && n != -1){
    vector<int> numeros;
    numeros.push_back(n);
    while(cin >> n && n != -1)
      numeros.push_back(n);
    
    vector<int> lis((int)numeros.size(),1);
    int ans = 0;

    for(int i = 0; i < (int)numeros.size(); i++)
      for(int j = i+1; j < (int)numeros.size(); j++)
	if(numeros[i] >= numeros[j])
	  if(lis[i]+1 > lis[j])
	    lis[j] = lis[i]+1;

    for(int i = 0; i < (int)lis.size(); i++)
      if(lis[i] > ans) ans = lis[i];

    if(caso > 1) cout << endl;
    cout << "Test #" << caso++ << ":\n  maximum possible interceptions: " << ans << endl;
  }
  
  return 0;
}
