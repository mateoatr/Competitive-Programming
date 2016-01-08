#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main(){
  int t, m, n; cin >> t;
  string A, B;
  char a, b;
  
  while(t--){
    cin >> m >> n;
    int x = 0;
    vector<vector<int> > caminos(30,vector<int>());
    map<char,int> ciudades;
    vector<char> ciudad(30);
    
    for(int i = 0; i < m; i++){
      cin >> A >> B;
      a = A[0]; b = B[0];
      if(!ciudades.count(a)){
	ciudades[a] = x;
	ciudad[x] = a;
	x++;
      }
      if(!ciudades.count(b)){
	ciudades[b] = x;
	ciudad[x] = b;
	x++;
      }
      caminos[ciudades[a]].push_back(ciudades[b]);
      caminos[ciudades[b]].push_back(ciudades[a]);
    }

    for(int i = 0; i < n; i++){
      cin >> A >> B;
      a = A[0]; b = B[0];

      queue<int> q; q.push(ciudades[a]);
      int distancia[30];
      int padre[30];
      fill(padre,padre+30,-1);
      fill(distancia,distancia+30,-1);
      distancia[ciudades[a]] = ciudades[a];
      
      while(!q.empty()){
	int u = q.front(); q.pop();

	for(int j = 0; j < (int)caminos[u].size(); j++){
	  int v = caminos[u][j];
	  if(padre[v] == -1){
	    padre[v] = u;
	    q.push(v);
	  }
	}
      }

      int k = ciudades[b];
      vector<char> ans;
      while(true){
	ans.push_back(ciudad[k]);
	k = padre[k];
	if(k == ciudades[a])
	  break;
      }
      ans.push_back(a);

      for(int i = (int)ans.size() - 1; i >= 0; i--)
	cout << ans[i];
      cout << endl;
    }
    if(t) cout << endl;
  }
  
  return 0;
}
