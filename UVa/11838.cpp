#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> adjlist;

adjlist AdjList;
vi dfs_num, dfs_low, visited, S;
int dfsNumberCounter, numSCC;

void tarjan(int u){
  dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
  S.push_back(u);
  visited[u] = 1;
  for(int i = 0; i < (int)AdjList[u].size(); i++){
    int v = AdjList[u][i];
    if(dfs_num[v] == 0)
      tarjan(v);
    if(visited[v])
       dfs_low[u] = min(dfs_low[u], dfs_low[v]);
  }

  if(dfs_low[u] == dfs_num[u]){
    numSCC++;
    while(true){
      int v = S.back(); visited[v] = 0; S.pop_back();
      if(u == v)
	break;
    }
  }
}

int main(){
  int N, M, a, b, c;
  while(cin >> N >> M && N != 0 && M != 0){
    AdjList.resize(N);
    dfs_num.resize(N);
    visited.resize(N);
    dfs_low.resize(N);
    numSCC = dfsNumberCounter = 0;

    for(int i = 0; i < M; i++){
      cin >> a >> b >> c;
      AdjList[a-1].push_back(b-1);
      if(c == 2) AdjList[b-1].push_back(a-1);
    }

    for(int i = 0; i < N; i++)
      if(dfs_num[i] == 0)
	tarjan(i);

    if(numSCC == 1) cout << 1 << endl;
    else cout << 0 << endl;

    visited.clear();
    AdjList.clear();
    dfs_low.clear();
    dfs_num.clear();
    S.clear();
  }
}
