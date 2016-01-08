#include <iostream>
#include <vector>
#include <stack>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> adjlist;

adjlist AdjList;
vi dfs_num;
stack<int> S;

void dfs(int u){
  dfs_num[u] = 1;
  for(int i = 0; i < (int)AdjList[u].size(); i++){
    int v = AdjList[u][i];
    if(dfs_num[v] == 0)
      dfs(v);
  }
  S.push(u);
}

void dfs2(int u){
  dfs_num[u] = 1;
  for(int i = 0; i < (int)AdjList[u].size(); i++){
    int v = AdjList[u][i];
    if(dfs_num[v] == 0)
      dfs2(v);
  }
}

int main(){
  int v, e, a, b, n, c = 1, k; cin >> n;
  while(n--){
    cin >> v >> e;
    AdjList.resize(v);
    dfs_num.resize(v);
    k = 0;
    for(int i = 0; i < e; i++){
      cin >> a >> b;
      AdjList[a-1].push_back(b-1);
    }
    
    for(int i = 0; i < v; i++){
      if(dfs_num[i] == 0){
	dfs(i);
      }
    }

    for(int i = 0; i < v; i++) dfs_num[i] = 0;
    
    while(!S.empty()){
      int u = S.top(); S.pop();
      if(dfs_num[u] == 0){
	dfs2(u); k++;
      }
    }

    cout << "Case " << c << ": " << k << endl;
    dfs_num.clear(); AdjList.clear(); c++;
  }
  return 0;
}
