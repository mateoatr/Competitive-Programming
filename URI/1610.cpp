#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> adj;

adj AdjList;
vi dfs_num, dfs_low, visited, S;
int dfsNumberCounter; bool ans;

void tarjan(int u){
  dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
  S.push_back(u); visited[u] = 1;
  for(int i = 0; i < (int)AdjList[u].size(); i++){
    int v = AdjList[u][i];
    if(dfs_num[v] == 0) tarjan(v);
    if(visited[v]) dfs_low[u] = min(dfs_low[u], dfs_low[v]);
  }

  if(dfs_low[u] == dfs_num[u]){
    int t = 0;
    while(true){
      int v = S.back(); S.pop_back(); visited[v] = 0; t++;
      if(u == v) break;
    }
    if(t > 1) ans = true;
  }
}

int main(){
  int n, m, t, u, v;
  scanf("%d",&t);

  while(t--){
    scanf("%d %d",&n,&m);
    AdjList.resize(n); dfs_num.resize(n); dfs_low.resize(n); visited.resize(n);
    dfsNumberCounter = 0; vi s; ans = false;
    bool scc = false;
    
    for(int i = 0; i < m; i++){
      scanf("%d %d",&u,&v); u--; v--;
      AdjList[u].push_back(v);
      s.push_back(u);
    }

    for(int i = 0; i < (int)s.size(); i++){
      tarjan(s[i]);
      if(ans){ scc = true; break; }
    }

    if(scc) printf("SIM\n");
    else printf("NAO\n");

    AdjList.clear(); dfs_num.clear(); dfs_low.clear(); visited.clear();
  }

  return 0;
}
