#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

int main(){
  int n, m;

  while(cin >> n){
    string s;

    vector<vector<int> > router(n+1,vector<int>());
    
    for(int i = 0; i < n; i++){
      cin >> s;
      string in; int a;
      for(int j = 0; j < (int)s.size(); j++){
	if(s[j] == '-'){
	  a = stoi(in);
	  in.clear();
	}
	else if(s[j] == ','){
	  router[a].push_back(stoi(in));
	  in.clear();
	}
	else
	  in += s[j];
      }
      if(!in.empty()) router[a].push_back(stoi(in)); 
    }

    cin >> m; cout << "-----" << endl;
    for(int i = 0; i < m; i++){
      int x, y; cin >> x >> y;

      queue<int> q; q.push(x);
      int padre[n+1] = {0};
      padre[x] = x;
      
      while(!q.empty()){
	int u = q.front(); q.pop();
	if(u == y) break; // Esto
	for(int j = 0; j < (int)router[u].size(); j++){
	  int v = router[u][j];
	  if(padre[v] == 0){
	    padre[v] = u;
	    q.push(v);
	  }
	}
      }

      if(padre[y] != 0){
	vector<int> ans; int k = y;
	while(true){
	  ans.push_back(k);
	  k = padre[k];
	  if(k == x){ ans.push_back(x); break; }
	}
	
	for(int i = (int)ans.size() - 1; i >= 0; i--){
	  cout << ans[i];
	  if(i) cout << " ";
	}
	cout << endl;
      }
      else
	cout << "connection impossible" << endl;
    }
  }
  
  return 0;
}
