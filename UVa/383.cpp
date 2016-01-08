#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

int main(){
  int t; cin >> t;

  cout << "SHIPPING ROUTES OUTPUT" << endl;
  
  for(int caso = 1; caso <= t; caso++){
    cout << endl << "DATA SET  " << caso << endl << endl;
    int m, n, p, size;
    string s1, s2;
    cin >> m >> n >> p;
    map<string,int> warehouses;
    
    for(int i = 0; i < m; i++){
      cin >> s1; warehouses[s1] = i;
    }
    
    vector<vector<int> > adjlist(m,vector<int>());;

    for(int i = 0; i < n; i++){
      cin >> s1 >> s2;
      adjlist[warehouses[s1]].push_back(warehouses[s2]);
      adjlist[warehouses[s2]].push_back(warehouses[s1]);
    }
    
    for(int i = 0; i < p; i++){
      cin >> size >> s1 >> s2;

      int distancia[m];
      fill(distancia,distancia+m,-1);
      queue<int> q; q.push(warehouses[s1]);
      distancia[warehouses[s1]] = 0;
      
      while(!q.empty()){
	int u = q.front(); q.pop();
	
	for(int j = 0; j < (int)adjlist[u].size(); j++){
	  int v = adjlist[u][j];
	  if(distancia[v] == -1){
	    distancia[v] = distancia[u] + 1;
	    q.push(v);
	  }
	}
      }

      if(distancia[warehouses[s2]] < 0) cout << "NO SHIPMENT POSSIBLE" << endl;
      else cout << "$" << size * distancia[warehouses[s2]] * 100 << endl;
    }
  }

  cout << endl << "END OF OUTPUT" << endl;
  return 0;
}
