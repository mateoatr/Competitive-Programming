#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> adjlist;

adjlist AdjList;
vi dfs_num, topo;

void dfs(int u){
  dfs_num[u] = 1;
  for(int i = 0; i < (int)AdjList[u].size(); i++){
    int v = AdjList[u][i];
    if(dfs_num[v] == 0)
      dfs(v);
  }
  topo.push_back(u);
}


int main(){
  int n, m, x, y;
  while(cin >> n >> m && n != 0 && m != 0){
    dfs_num.resize(n,0);
    AdjList.resize(n,vi(n,0));
    
    for(int i = 0; i < m; i++){
      cin >> x >> y;
      AdjList[x-1].push_back(y-1);
    }

    for(int i = 0; i < n; i++)
      if(!dfs_num[i])
	dfs(i);

    reverse(topo.begin(), topo.end());
    for(int i = 0; i < n; i++){
      if(i > 0) cout << " ";
      cout << topo[i];
    }
    cout << endl;

    for(int i = 0; i < n; i++){
      dfs_num[i] = 0; topo[i] = 0;
      AdjList[i].clear();
    }
  }
  return  0;
}
