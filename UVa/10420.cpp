#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int n,i;
  cin >> n;

  vector<string>pais (n+1);

  int c;
  bool flag = true;

  for(i = 0; i <= n; i++){
    do{
      c = getchar();
      if(c == ' ')
	flag = false;
      else if(flag)
	pais[i] += c;
    }while(c != '\n');
    flag = true;
  }

  sort(pais.begin(), pais.end());
  
  int count = 1;
  for(int i = 2; i <= n; i++){
    if(pais[i] == pais[i-1])
      count++;
    else{
      cout << pais[i-1] << " " << count << endl;
      count = 1;
    }
  }
  cout << pais[n] << " " << count << endl;

  return 0;
}
	
