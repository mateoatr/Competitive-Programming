#include <iostream>
using namespace std;

int set[50005], ans;

void initSet(int N){ 
  ans = N; 
  for(int i = 0; i <= N + 1; i++) 
    set[i] = i; 
}

int findSet(int i){ 
  return (set[i] == i) ? i : (set[i] = findSet(set[i])); 
}

bool sameSet(int i, int j){ 
  return findSet(i) == findSet(j); 
}

void unionSet(int i, int j){ 
  if(!sameSet(i,j)){ 
    set[findSet(i)] = findSet(j); 
    ans--; 
  }
}

int main(){
  int n, m, a, b, caso = 1;
  while(cin >> n >> m && n != 0 && m != 0){
    for(int i = 1; i <= n; i++)
      set[i] = i;
    ans = n;
    
    for(int i = 0; i < m; i++){
      cin >> a >> b;
      unionSet(a,b);
    }

    cout << "Case " << caso << ": " << ans << endl;
    caso++;
  }
  return 0;
}
