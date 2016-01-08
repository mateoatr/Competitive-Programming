#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > v;
vector<int> visited;
vector<int> order;

void DFS(int u){
  visited[u] = 1;
  for(int i = 0; i < (int)v[u].size(); i++){
    int v_ = v[u][i];
    if(visited[v_] == 0)
      DFS(v_);
  }
  order.push_back(u);
}

void marca(int u){
  visited[u] = 1;
  for(int i = 0; i < (int)v[u].size(); i++){
    int v_ = v[u][i];
    if(visited[v_] == 0)
      marca(v_);
  }
}

int main(){
  int T, n, m, a, b; cin >> T;
  while(T--){
    cin >> n >> m; int k = 0;
    v.resize(n); visited.resize(n);
    
    for(int i = 0; i < m; i++){
      cin >> a >> b;
      v[a-1].push_back(b-1);
    }
    
    for(int i = 0; i < n; i++)
      if(visited[i] == 0)
	DFS(i);
    reverse(order.begin(), order.end());
    
    for(int i = 0; i < (int)visited.size(); i++)
      visited[i] = 0;

    for(int i = 0; i < (int)order.size(); i++){
      int v_ = order[i];
      if(visited[v_] == 0){
	marca(v_); k++;
      }
    }
    cout << k << endl;
    v.clear(); visited.clear(); order.clear();
  }
  return 0;
}
